#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,6,7,3,23,5,7,423,2,45,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    
    for(int i=0; i<size-1;i++){
        int index=i;
        for(int j=i+1; j<size; j++){
            if(arr[index]>arr[j]){
                index=j;
            }
            
        }
        swap(arr[i],arr[index]);
    }

    // print the elements
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

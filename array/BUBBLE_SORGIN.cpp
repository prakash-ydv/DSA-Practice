#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,5,2,5,62,3,5,0,3,3,2,5,646,3,434,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    // lets print all elements

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
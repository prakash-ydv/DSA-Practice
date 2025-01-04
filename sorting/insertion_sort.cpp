// insertion sorting

#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,6,2,5,7,3,3,6,4,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

   for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }else{
            break;
        }
    }
   }

    // display the array

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}
#include <iostream>
using namespace std;

int main(){

    int arr[]={1,24,55,5657,67,6,785,687,68,65,575,64,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(n<=0){
        cout<<"Array is Empty";
    }

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // display the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
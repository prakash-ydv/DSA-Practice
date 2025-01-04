// insertion sorting

#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,3,6,2,5,7,3,3,6,4,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

// outer loop should be stated with 1 to avoid index 0-1 because inner loop is using first reference as j=i
//  it means the point will start with second element

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
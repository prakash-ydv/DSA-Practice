#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int k = 3;

    // remove one element from array

    cout<<"Original array Size: "<<n<<endl;

    // Shift all elements to the left by k positions
    for(int i = k; i < n; i++){
        arr[i] = arr[i+1];
    }
    cout<<endl;

    // Reduce the size of array by 1
    n--;
    cout<<n<<endl;

    // Display the modified array
    cout<<"Modified array: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<size<<endl; 
}
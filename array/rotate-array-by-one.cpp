/*

    Example
    Input: arr[] = [1, 2, 3, 4, 5]
    Output: [5, 1, 2, 3, 4]

    Approch
    hold the last value in a variable
    shift all element of array by index+1
    insert the last element to arr[0]

*/

// note - first attempt me chal gya oyeee


#include <iostream>
using namespace std;

void rotateArr(int arr[], int size){
    int last = arr[size-1];

    for(int i=size-1; i>0; i--){
        arr[i]=arr[i-1];
    }

    arr[0]=last;

    // code the print the array
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;
    }

    
}

int main(){

    int arr[] = {1,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    rotateArr(arr,size);

}
// code to perform binary search in an array
// the array should be already sorted

#include <iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;
    int target = 0;
    int midIndex = (start+end)/2;

    while(start<=end){

        if(arr[midIndex]==target){
            cout<<"Got it at index "<< midIndex;
            break;
        }else if(arr[midIndex]<target){
            // lets find in right side
            start = midIndex+1;
            midIndex = (start+end)/2;
        }else{
            // lets find in left side
            end = midIndex-1;
            midIndex = (start+end)/2;
        }
        
    }

    if(start>end){
        cout<<"Element Not Found";
    }
}
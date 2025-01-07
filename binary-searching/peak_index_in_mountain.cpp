// find peak element in mountain 

/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.


Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

*/

// approch -- jo peak element hoga uske left and right dono side element usse chhota honge


#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,6,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;
    int mid;

    int peak = -1;

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]> arr[mid-1] && arr[mid]> arr[mid+1]){
            peak = mid;
            break;
        }else if (arr[mid]>arr[mid+1]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    cout<<"peak index is "<<peak;
}

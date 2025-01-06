/*

Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

Examples:

Input: arr[] = [1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0]
Output: 3
Explanation: There are 3 0's in the given array.
Input: arr[] = [0, 0, 0, 0, 0]
Output: 5
Explanation: There are 5 0's in the array.

*/

// approch --  we need to find the first occurance of zero and subtract it to the size of array (size - firstIndex)

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,1,1,1,1,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;
    int firstIndex = 0;
    int mid;

    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==0){
            firstIndex = mid;
            end = mid-1;
        }else if (arr[mid != 0]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }   

    cout<<"first index of 0 is "<<firstIndex<<endl;
    cout<<"Number of zeros are "<<n-firstIndex;
}
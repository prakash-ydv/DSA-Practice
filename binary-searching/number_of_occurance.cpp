/*


Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

Examples :

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: target = 2 occurs 4 times in the given array so the output is 4

https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=geeksforgeeks&utm_medium

*/


// approch - find first and last occurrence then subtract the last occurrence index from the first occurrence index and +1


#include <iostream>
using namespace std;

int main(){

    int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    int firstIndex = -1;
    int lastIndex = -2;

    int start = 0;
    int end = n-1;
    int mid;

    // first occurrence
    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]==target){
            firstIndex = mid;
            end = mid-1;
        } else if (arr[mid+1]>target){
            end = mid-1;
        }else{
            start = mid+1;
        }

    }

    // last occurance
    start = 0;
    end  = n-1;

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]==target){
            lastIndex = mid;
            start = mid+1;
        }else if (arr[mid]> target){
            end = mid - 1;
        }else{
            start = mid +1;
        }
    }

    cout<<"number of occurance is "<< (lastIndex-firstIndex)+1;


}
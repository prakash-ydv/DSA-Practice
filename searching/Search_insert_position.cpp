// code to find insert position of a given element

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2};
    int target = 2;

    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    int mid;
    int insert;

    // edge case - if the last element is less than the target element than we dont need to find the position, the last index will be the insertion position of the element

    if(arr[end]<target){
       insert = end; //if the target element is greater than all then we can insert the element at last index
       cout<<"we can insert at index "<<insert;
       return 0;

    } 

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid-1]<target && arr[mid]>=target){
            insert = mid;
            break;
        }else if (arr[mid]>target){
            end = mid-1;
        }else{
            start = mid +1;
        }
    }

    cout<<"You can insert at index "<<insert;
}
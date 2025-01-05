// find first and last occurance of element 
// ex arr=[1,2,3,4,5,6,6,6,7,8]
//  target = 6
// first occurance in 5th index and last in 7th index

#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,6,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 6;
    int start = 0;
    int end = n-1;
    int firstIndex = -1;
    int secondIndex = -1;
    int mid;

    // first occurance 
    
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==target){
            firstIndex = mid;
            end = mid-1;
        }else if(target<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

     // Second occurance 

    start = 0;
    end = n-1;
    
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==target){
            secondIndex = mid;
            start = mid+1;
        }else if(target<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }

    cout<<"First index is "<<firstIndex<<endl;
    cout<<"Second index is "<< secondIndex<<endl;
 

}
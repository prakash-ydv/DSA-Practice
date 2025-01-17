#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> arr = {0,1,1,0,0,1,0,1,0,0,1,0,0,0};
    int n = arr.size();
    
    int start = 0, end = n-1;

    // using two pointers

    while(start < end){
        if(arr[start]>arr[end]){
            swap(arr[start], arr[end]);
        }else if (arr[start]== 0){
            start++;
        }else{
            end--;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
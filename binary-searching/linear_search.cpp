// the normal searchin we perform in array by finding the element
// from index 0 to n is called liner search


#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        if(arr[i]==5){
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }
}
// code to reverse the array

#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){

    cout<<"Reverse started"<<endl;

    int revArr[size]={};
    int index=0;

    while(size>0){
        revArr[index]=arr[size-1];
        size--;
        index++;
    }

    int revSize = index; 
    
    for(int i=0 ; i<revSize; i++){
        cout<<revArr[i]<<" ";
        
    }

    cout<<endl<<"Reverse Finished"<<endl;
}


int main(){

    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,size);

}

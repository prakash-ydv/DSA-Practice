#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    // crerate vector and add some elements

    vector <int> arr;

    arr.push_back(3);
    arr.push_back(31);
    arr.push_back(13);
    arr.push_back(311);
    arr.push_back(113);
    arr.push_back(131);

    cout<<"before sortin"<<endl;

    for(auto i : arr){
        cout<<i<<" ";
    }

    // sort from chhota to bada

    sort(arr.begin() , arr.end());

    cout<<endl<<"after sorting "<<endl;

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;


    // sorting from bada to chhota
    
    sort(arr.rbegin(), arr.rend());

    for(auto i : arr){
        cout<<i<<" ";
    }

}
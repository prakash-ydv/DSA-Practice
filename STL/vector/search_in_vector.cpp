#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // create vector
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(12);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(134);

    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // searching in vector
    cout<< binary_search(arr.begin(),arr.end(),112); //return 1 if found else it will return 0
    cout<<endl;
    
    // search index of the element

    /*
    find(arr.beign(),arr.end(),element )-- it will retun the literal pointing to the searched element

    to get the index of the element we need to subtract it with arr.begin();
    */
    cout<<find(arr.begin(),arr.end(),21) - arr.begin(); 

    // count number of occurance 
    // int count = count(arr.begin(),arr.end(),1); -- may not work in all compiler
    

    // find maximum in vector
    // int max = max_element(arr.begin(),arr.end()); -- may not work in all compiler
}

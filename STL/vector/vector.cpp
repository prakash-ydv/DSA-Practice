#include <iostream>
#include <vector>
using namespace std;

int main(){
    // create vector
    // vector <dataType> name;

    vector <int> arr;
    
    // insert element in last index
    arr.push_back(5);
    arr.push_back(51);
    arr.push_back(15);
    arr.push_back(511);
    arr.push_back(115);

    // remove element from last index
    arr.pop_back();
    arr.pop_back();

    cout<<arr.size()<<endl;

    // create vector with size
    // vector <dataType> name (size, defaultValue)

    vector <int> arr2 (5,2);
    arr2[2] = 7;
    for(auto i : arr2){         //for every value of arr2
        cout<<i;
    }

    cout<<endl;


    // remove element from middle of the vector
    
    // arr.erase(arr.begin() + index)


    // remove all elements from vector
    arr2.clear();

    cout<<arr2.size();
}
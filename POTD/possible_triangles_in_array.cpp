/*
Given an integer array arr[]. Find the number of triangles that can be formed with three different array elements as lengths of three sides of the triangle. 

A triangle with three given sides is only possible if sum of any two sides is always greater than the third side.

Examples:

Input: arr[] = [4, 6, 3, 7]
Output: 3
Explanation: There are three triangles possible [3, 4, 6], [4, 6, 7] and [3, 6, 7]. Note that [3, 4, 7] is not a possible triangle.  
Input: arr[] = [10, 21, 22, 100, 101, 200, 300]
Output: 6
Explanation: There can be 6 possible triangles: [10, 21, 22], [21, 100, 101], [22, 100, 101], [10, 100, 101], [100, 101, 200] and [101, 200, 300]

*/

/*


Approch--
to make a triangle there is rule that sum of any two side should be greater than third side
a+b > b
b+c > a
a+c > b

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> arr = {4, 6, 3, 7};
    sort(arr.begin(),arr.end());

    
    int n = arr.size();
    int start;
    int end;
    int possibleTriangle = 0;

    for(int i = n-1; i>=2; i--){
        start = 0;
        end = i-1;

        while(start<end){
            if(arr[start] + arr[end]>arr[i]){
                possibleTriangle += end-start;
                end--;
            }else{
                start++;
            }
        }
    }

    cout<<"possible triangle will be "<<possibleTriangle;

}
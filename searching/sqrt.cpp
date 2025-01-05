// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

/*

Example 1:

Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

*/

#include <iostream>
using namespace std;

int main(){

    // solving it using binary approch

    int inp = 101;
    int mid;
    int start = 1;
    int end = inp;
    int midSqr;

    if(inp == 1){
        cout<<1;
        return 0;
    }

    while(start<end){
        mid = start + (end - start)/2;
        midSqr = mid*mid;

        if(midSqr == inp || ( inp > ((mid+1)*(mid+1)) && inp < ( (mid-1)* (mid-1) ) ) ) {
            break;
        }else if(midSqr < inp){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }

    cout<<mid<<" is the Number ";

}
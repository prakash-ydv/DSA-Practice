// code to find missing number in a array

// User function template for C++
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        
        int sum=0;
        int arr_sum=0;
        for(int i=0;i<n-1;i++){
           arr_sum+=arr[i];
        };
        
        int ans=n*(n+1)/2;
        int missing = ans-arr_sum;
    }
};
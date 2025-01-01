// approch
// first find the highest number after then compare it from all and find secone highest number

#include <iostream>
using namespace std;

int secondHighest(int arr[], int size)
{
    int max = INT_MIN;
    int secondMax = INT_MIN;

    if(size<=1){
        cout<<"insufficient elements in array"<<endl;
        return secondMax;
    }

    for (int i = 0; i < size ; i++)
    {

        if (arr[i] > max)
        {   
            secondMax = max;
            max = arr[i];
            cout<<max<<endl;
        }
        else if (arr[i] > secondMax && arr[i] < max)
        {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        return -1; // Indicate no second-highest value
    }

    return secondMax;
}

int main()
{
    int arr[] = {12};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = secondHighest(arr,size);
    cout<<"Second Highest is " <<result;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};  // Empty array
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n == 0) {  // Check if the array is empty
        cout << "Array is empty" << endl;
        return 0;
    }

    bool isSwaped;

    for (int i = n - 1; i > 0; i--) {
        isSwaped = false;  // Reset swap flag at the start of each iteration
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwaped = true;
            }
        }

        // If no elements were swapped, the array is already sorted
        if (!isSwaped) {
            cout<<"array is already sorted"<<endl;
            break;
        }
    }

    // Display the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

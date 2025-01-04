#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findDuplicate(int arr[], int size) {
    vector<int> duplicates; // Dynamic container for duplicates

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Check if already added to avoid duplicate duplicates
                if (find(duplicates.begin(), duplicates.end(), arr[i]) == duplicates.end()) {
                    duplicates.push_back(arr[i]);
                }
            }
        }
    }

    // Print the duplicates
    if (!duplicates.empty()) {
        cout << "Duplicate elements are: ";
        for (int num : duplicates) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "No duplicate elements found." << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findDuplicate(arr, size);
    
    return 0;
}

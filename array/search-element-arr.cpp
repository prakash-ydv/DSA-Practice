//code to find index of given element from array
// reutn -1 if not found


#include <iostream>
using namespace std;

int search(int element, int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        
    }

    return -1;
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int element = 51;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = search(element, arr,size);
    cout << result;
}
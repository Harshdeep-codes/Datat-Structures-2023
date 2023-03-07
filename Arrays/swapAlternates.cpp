#include <iostream>
using namespace std;

void swapArray(int arr[], int N)
{
    int i = arr[0];
    for (int i = 0; i < N; i += 2)
    {
        if (i + 1 < N)
        {
            swap(arr[i], arr[i + 1]);
            // cout<<arr[i];
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver's code
int main(void)
{
    int arr[] = {2, 3, 4, 11, 40};
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);
    // Function call
    printArray(arr, N);
    cout << "Swapped Array:" << endl;
    swapArray(arr, N);
    printArray(arr, N);
    return 0;
}

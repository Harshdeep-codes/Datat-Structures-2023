#include <iostream>
using namespace std;

void reverseArray(int arr[],int start, int end){

while (start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}

void printArray(int arr[], int size){
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
    printArray(arr,N);
    cout<<"Reversed Array:"<<endl;
    reverseArray(arr,0,N-1);
    printArray(arr,N);
    return 0;
}

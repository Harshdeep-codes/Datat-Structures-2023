#include <iostream>
using namespace std;

int maxElement(int arr[], int N){
    int max = arr[0];
    for (int i = 0; i < N; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int minElement(int arr[], int N){
    int min = arr[0];
    for (int i = 0; i < N; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

// Driver's code
int main(void)
{
    int arr[] = {2, 3, 4, 11, 40};
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
   cout<<maxElement(arr,N)<<endl;
   cout<<minElement(arr,N)<<endl;
    return 0;
}

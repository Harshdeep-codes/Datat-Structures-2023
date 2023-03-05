#include <iostream>
using namespace std;


bool search(int arr[], int N, int x){
    for (int i = 0; i < N; i++)
    {
        if(arr[i]==x){
            return true;
        }
    }
    return false;
}

// Driver's code
int main(void)
{
    int arr[] = { 2, 3, 4, 11, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    int result = search(arr, N, x);
    if(result){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}

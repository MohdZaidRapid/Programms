#include <iostream>
using namespace std;

void fibonacci(int n, int arr[])
{
    // 0 1 1 2 3 5 8 13 21 34           1+1=2
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        int a = arr[0];                   // 0
        int b = arr[1];                   // 1
        arr[i] = arr[i - 2] + arr[i - 1]; // 1
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n = 10;
    int *arr = new int[n];
    fibonacci(n, arr);
    return 0;
}
#include <iostream>
using namespace std;

int *fibonacci(int n)
{
    int *arr = new int[n];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr;
}

int main()
{
    int n = 10;
    int *p = fibonacci(n);
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}
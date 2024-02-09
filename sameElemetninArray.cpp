#include <iostream>
using namespace std;

void sameElement(int arr[], int n)
{
    int *result = new int[n];
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            result[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << result[i] << endl;
    }
}

int main()
{
    int arr[] = {2, 2, 3, 1, 1, 6, 7, 8, 8};
    int n = 9;
    sameElement(arr, n);
    // int *arr = new int[n];

    return 0;
}
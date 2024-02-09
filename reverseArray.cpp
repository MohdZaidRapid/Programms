#include <iostream>
using namespace std;

void swap366(int *arr1, int *arr2, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

}

void swap36(int &arr1, int &arr2)
{
    int temp = arr1;
    arr1 = arr2;
    arr2 = temp;
}

void reverse(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap36(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{

    int arr[] = {1, 2, 34, 5, 6, 7, 8, 9, 23, 4, 5, 6, 7};
    int arr1[] = {3, 2, 34, 5, 6, 7, 58, 469, 823, 984, 225, 546, 197};
    int arr2[] = {13, 32, 364, 75, 96, 27, 58, 69, 723, 84, 25, 56, 97};
    int n = 13;
    swap366(arr1, arr2, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }

    // reverse(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    return 0;
}
#include <iostream>
using namespace std;

long long maxElement(long long arr[], long long n)
{
    long long max = LLONG_MIN;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    long long arr[] = {1, 23, 4, 588, 99, 66, 55, 44, 22, 34, 567, 89, 12, 1001, 10000000};
    long long n = 15;
    long long maxElements = maxElement(arr, n);
    cout << maxElements << endl;
    return 0;
}
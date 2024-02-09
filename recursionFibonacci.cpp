#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    

    int numbers = fibonacci(n - 1) + fibonacci(n - 2);
    return numbers;
}

int main()
{
    int n = 10;
    int sum = fibonacci(n);
    cout << sum << endl;
    return 0;
}
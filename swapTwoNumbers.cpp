#include <iostream>
using namespace std;

void swapS(int &a, int &b)
{

    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
}

int main()
{
    int a = 10, b = 20;
    swapS(a, b);
    cout << a << endl
         << b;
    return 0;
}
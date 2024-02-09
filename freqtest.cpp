#include <iostream>
using namespace std;

void frequency(string str)
{
    int n = 26;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];
        int index = ch - 'a';

        if (ch >= 'a' || ch <= 'z')
        {

            arr[index]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = i + 'a';
        cout << ch << "  "
             << arr[i] << endl;
    }
}

// {a:1}
int main()
{
    frequency("zaidzaidzaidzaidzaidabcnfeorieuto");
    return 0;
}
#include <iostream>
using namespace std;

void nonRepeating(string str)
{
    int n = 26;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < str.length(); i++)
    {
        // char ch = str[i];
        // int index = ch - 'a';
        arr[str[i] - 'a']++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (arr[str[i] - 'a'] == 1)
        {
            cout << str[i] << " " << endl;
        }
    }
}

int main()
{
    string str = "abcrrrrrrrrrrrrrkkkkkkkkkkkkkkkkkkkeeeeeeeeeeeeeeeeeeeennnnnnnnnnoooooooeeeeeeeeeeeeeea";
    nonRepeating(str);

    return 0;
}
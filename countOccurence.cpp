#include <iostream>

using namespace std;

void countOccurence(string str)
{
    int n = 26;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char ch = str[i]; // a
        int index = ch - 'a';
        arr[index]++;
    }
    for (int i = 0; i < n; i++)
    {
        char ch = 'a' + i;
        cout << ch << "  " << arr[i] << endl;
    }
}

int main()
{
    string str = "zaid";
    countOccurence(str);
}
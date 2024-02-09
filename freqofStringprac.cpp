#include <iostream>
using namespace std;

void freqOfString(string str)
{
    int *arr = new int[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < 26; i++)
    { 
        char ch = str[i];
        int index = ch - 'a';
        arr[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        cout << ch << "  " << arr[i] << endl;
    }
}

// void freqOfString(string str)
// {
//     int *arr = new int[26];
//     int len = str.length();

//     for (int i = 0; i < 26; i++)
//     {
//         arr[i] = 0;
//     }

//     for (int i = 0; i < len; i++)
//     {
//         char ch = str[i];
//         if (ch >= 'a' && ch <= 'z')
//         {
//             int index = ch - 'a';
//             arr[index]++;
//         }
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         char ch = 'a' + i;
//         cout << ch << " : " << arr[i] << endl;
//     }

//     delete[] arr; // Don't forget to release the dynamically allocated memory.
// }

int main()
{
    freqOfString("zaidzaifzaidzaidzaidzaidzaid");
    return 0;
}

// cout<< a:1

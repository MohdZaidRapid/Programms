#include <iostream>
using namespace std;

// void removeDuplicate(string &str, int &n)
// {
//     if (n <= 1)
//     {
//         return;
//     }
//     int newArray = 1;

//     for (int i = 1; i < n; i++)
//     {
//         bool isDuplicate = false;
//         for (int j = 0; j < newArray; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if (!isDuplicate)
//         {
//             str[newArray] = str[i];
//             newArray++;
//         }
//     }
//     str.resize(newArray);
//     n = newArray;
// }

// int main()
// {
//     string str = "zaidmynameiszaidertyuoiabcdefghijklmnopqrstuvwxyz";
//     int n = str.length();
//     cout << n << endl;
//     removeDuplicate(str, n);
//     for (int i = 0; i < n; i++)
//     {

//         cout << str[i] << " ";
//     }
//     cout << endl
//          << "size is " << n << endl;
//     return 0;
// }

int main()
{
    string s, result = "";
    cout << "Enter string: \n";
    cin >> s;

    int hash[123] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (hash[s[i]] == 0)
        {
            hash[s[i]] = 1;
            result += s[i];
        }
    }
    cout << result << endl;
}

// #include <iostream>
// using namespace std;

// void removeDuplicate(string &str, int &n)
// {
//     if (n <= 1)
//     {
//         return;
//     }
//     int newArray = 1;

//     for (int i = 1; i < n; i++)
//     {
//         bool isDuplicate = false;
//         for (int j = 0; j < newArray; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if (!isDuplicate)
//         {
//             str[newArray] = str[i];
//             newArray++;
//         }
//     }

//     // Trim the string to the new length
//     str.resize(newArray);
//     n = newArray;
// }

// int main()
// {
//     string str = "zaidmynameiszaidertyuoiabcdefghijklmnopqrstuvwxyz";
//     int n = str.length();
//     cout << "Original size: " << n << endl;

//     removeDuplicate(str, n);

//     cout << "Unique characters: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << str[i];
//     }
//     cout << endl << "New size: " << n << endl;

//     return 0;
// }

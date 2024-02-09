#include <iostream>
using namespace std;

bool palidromeString(string str)
{
    int strLength = str.length();
    int i = 0, j = strLength - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()

{
    string str = "referw";
    bool flag = palidromeString(str);
    if (flag)
    {
        cout << "palindrome" << endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

    return 0;
}
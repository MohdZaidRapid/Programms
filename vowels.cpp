#include <iostream>

using namespace std;

void VowelsAndConsonant(string str)
{
    int n = str.length();
    int vowelsCount = 0;
    int consonantsCount = 0;
    for (int i = 0; i < n; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i')
        {
            vowelsCount += 1;
        }
        else
        {
            consonantsCount += 1;
        }
    }
    cout << "consonants Count " << consonantsCount << endl;
    cout << "Vowels Count " << vowelsCount << endl;
}
int main()
{
    string str = "aeiou";
    VowelsAndConsonant(str);
    return 0;
}
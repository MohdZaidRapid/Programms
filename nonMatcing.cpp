#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, int> nonMatching(string str)
{
    unordered_map<char, int> mp;

    int n = str.length();

    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
        //mp[str[i]]=mp[str[i]]+1
    }

    unordered_map<char, int> result;
    for (int i = 0; i < n; i++)
    {
        if (mp[str[i]] == 1)
        {
            result[str[i]] = 1;
        }
    }

    return result;
}

int main()
{
    string str = "zaid";
    unordered_map<char, int> myMap = nonMatching("himynameiszadizaidyoumynamex");
    for (const auto &pair : myMap)
    {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
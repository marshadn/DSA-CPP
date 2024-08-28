#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    unordered_map<char, int> charCount;

    // Count characters in the first string
    for (char c : s)
    {
        charCount[c]++;
    }

    // Decrease counts based on the second string
    for (char c : t)
    {
        if (charCount.find(c) == charCount.end() || charCount[c] == 0)
        {
            return false;
        }
        charCount[c]--;
    }

    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
    {
        cout << s << " and " << t << " are anagrams." << endl;
    }
    else
    {
        cout << s << " and " << t << " are not anagrams." << endl;
    }

    return 0;
}

// Find longest substring withiut repeating character

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int lengthOfLongestSubstring(const string &s)
{
    unordered_set<char> charSet;
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); ++right)
    {
        // If the character is already in the set, remove characters from the left
        // until the duplicate character is removed
        while (charSet.find(s[right]) != charSet.end())
        {
            charSet.erase(s[left]);
            ++left;
        }

        // Insert the current character and update the max length
        charSet.insert(s[right]);
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{
    string str = "abcabcbb";
    cout << "The length of the longest substring without repeating characters is: "
         << lengthOfLongestSubstring(str) << endl;

    return 0;
}

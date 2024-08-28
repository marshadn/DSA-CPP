#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int characterReplacement(string s, int k)
{
    unordered_map<char, int> charCount;
    int maxFreq = 0, left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); ++right)
    {
        charCount[s[right]]++;
        maxFreq = max(maxFreq, charCount[s[right]]);

        // If the current window size minus the most frequent character count is greater than k
        // shrink the window from the left
        if ((right - left + 1) - maxFreq > k)
        {
            charCount[s[left]]--;
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{
    string s = "AABABBA";
    int k = 1;
    cout << "The length of the longest substring after character replacement is: "
         << characterReplacement(s, k) << endl;

    return 0;
}

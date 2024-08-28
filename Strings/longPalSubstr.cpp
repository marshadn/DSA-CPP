#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (s.empty())
            return "";
        int n = s.length();
        int start = 0, maxLength = 1;

        for (int i = 0; i < n; ++i)
        {
            // Expand around s[i] as the center (odd-length palindrome)
            int len1 = expandAroundCenter(s, i, i);
            // Expand around s[i] and s[i+1] as the center (even-length palindrome)
            int len2 = expandAroundCenter(s, i, i + 1);

            int len = max(len1, len2);
            if (len > maxLength)
            {
                maxLength = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLength);
    }

private:
    int expandAroundCenter(const string &s, int left, int right)
    {
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            --left;
            ++right;
        }
        // Length of the palindrome is (right - left - 1)
        return right - left - 1;
    }
};

int main()
{
    Solution solution;
    string s = "babad";
    string result = solution.longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}

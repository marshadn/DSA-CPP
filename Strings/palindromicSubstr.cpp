#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int countSubstrings(string s)
    {
        int n = s.length();
        int count = 0;

        for (int i = 0; i < n; ++i)
        {
            // Count palindromic substrings centered at i (odd-length)
            count += expandAroundCenter(s, i, i);
            // Count palindromic substrings centered between i and i+1 (even-length)
            count += expandAroundCenter(s, i, i + 1);
        }

        return count;
    }

private:
    int expandAroundCenter(const string &s, int left, int right)
    {
        int count = 0;
        while (left >= 0 && right < s.length() && s[left] == s[right])
        {
            ++count;
            --left;
            ++right;
        }
        return count;
    }
};

int main()
{
    Solution solution;
    string s = "aaa";
    int result = solution.countSubstrings(s);
    cout << "Number of palindromic substrings: " << result << endl;

    return 0;
}

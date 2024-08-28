#include <iostream>
#include <unordered_map>
#include <string>
#include <climits>
using namespace std;

string minWindow(string s, string t)
{
    unordered_map<char, int> tCount, windowCount;

    for (char c : t)
    {
        tCount[c]++;
    }

    int required = tCount.size();
    int formed = 0;
    int left = 0, right = 0;
    int minLength = INT_MAX;
    int start = 0;

    while (right < s.length())
    {
        char c = s[right];
        windowCount[c]++;

        if (tCount.find(c) != tCount.end() && windowCount[c] == tCount[c])
        {
            formed++;
        }

        while (left <= right && formed == required)
        {
            c = s[left];

            if (right - left + 1 < minLength)
            {
                minLength = right - left + 1;
                start = left;
            }

            windowCount[c]--;
            if (tCount.find(c) != tCount.end() && windowCount[c] < tCount[c])
            {
                formed--;
            }

            left++;
        }

        right++;
    }

    return minLength == INT_MAX ? "" : s.substr(start, minLength);
}

int main()
{
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = minWindow(s, t);

    if (!result.empty())
    {
        cout << "The minimum window substring is: " << result << endl;
    }
    else
    {
        cout << "No valid substring found." << endl;
    }

    return 0;
}

// Given a String remove all the duplicate characters from the given String.
#include <bits/stdc++.h>

using namespace std;

string removeDuplicateLetters(string s)
{
    string ans = "";
    vector<bool> map(26, false);
    for (int i = 0; i < s.length(); i++)
    {
        if (map[s[i] - 'a'] == false)
        {
            ans += s[i];
            map[s[i] - 'a'] = true;
        }
    }
    return ans;
}
int main()
{
    string str = "cbacdcbc";
    cout << "Original String: " << str << endl
         << "After removing duplicates: "
         << removeDuplicateLetters(str) << endl;
    return 0;
}
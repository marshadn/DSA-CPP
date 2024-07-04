#include <bits/stdc++.h>
using namespace std;
string reverseVowels(string s)
{
    string word = s;
    int start = 0;
    int end = s.length() - 1;
    string vowels = "aeiouAEIOU";
    while (start < end)
    {
        while (start < end && vowels.find(word[start]) == string::npos)
        {
            start++;
        }
        while (start < end && vowels.find(word[end]) == string::npos)
        {
            end--;
        }
        swap(word[start], word[end]);
        start++;
        end--;
    }
    return word;
}
int main()
{
    // string s = "hello";
    string s = "leetcode";
    cout << reverseVowels(s);

    return 0;
}
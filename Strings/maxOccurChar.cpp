/*
 Given a string, return the character that occurs the maximum number of times in the string.
If the maximum occurrence of two or more characters is the same,return any one of them.
*/

#include <iostream>
using namespace std;
char maxOccurringChar(string str)
{
    char ans;
    int maxfreq = 0, n = str.length();
    int count[256] = {0};
    for (int i = 0; i < n; i++)
    {
        count[str[i]]++;
        if (count[str[i]] > maxfreq)
        {
            maxfreq = count[str[i]];
            ans = str[i];
        }
    }
    return ans;
}
int main()
{
    string str = "mycharacter";
    cout << "Maximum occurring character is " << maxOccurringChar(str) << endl;
}
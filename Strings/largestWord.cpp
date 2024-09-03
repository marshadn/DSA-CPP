// Given a String, find the largest word in the string.

#include <bits/stdc++.h>
using namespace std;

void MaxLengthWords(string str, string &maxWord)
{
    int len = str.length();
    int i = 0, j = 0;

    int min_length = len, max_length = 0, max_start = 0;

    while (j <= len)
    {
        if (j < len && str[j] != ' ')
            j++;

        else
        {
            int curr_length = j - i;

            if (curr_length > max_length)
            {
                max_length = curr_length;
                max_start = i;
            }
            j++;
            i = j;
        }
    }

    maxWord = str.substr(max_start, max_length);
}

// Driver code
int main()
{
    string str = "Google Docs";
    string maxWord;
    MaxLengthWords(str, maxWord);

    cout << "Largest Word is: " << maxWord << endl;
}

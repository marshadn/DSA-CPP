#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> fullJustify(vector<string> &words, int maxWidth)
    {
        vector<string> result;
        int n = words.size();
        int index = 0;

        while (index < n)
        {
            int totalChars = words[index].length();
            int last = index + 1;

            while (last < n)
            {
                if (totalChars + words[last].length() + (last - index) > maxWidth)
                    break;
                totalChars += words[last].length();
                last++;
            }

            string line;
            int numWords = last - index;
            int numSpaces = maxWidth - totalChars;

            // If we're at the last line or the line contains only one word
            if (last == n || numWords == 1)
            {
                for (int i = index; i < last; i++)
                {
                    line += words[i];
                    if (i != last - 1)
                        line += " ";
                }
                line += string(maxWidth - line.length(), ' '); // Fill the rest with spaces
            }
            else
            {
                int spaceBetweenWords = numSpaces / (numWords - 1);
                int extraSpaces = numSpaces % (numWords - 1);

                for (int i = index; i < last; i++)
                {
                    line += words[i];
                    if (i != last - 1)
                    {
                        line += string(spaceBetweenWords + (i - index < extraSpaces ? 1 : 0), ' ');
                    }
                }
            }

            result.push_back(line);
            index = last;
        }

        return result;
    }
};

int main()
{
    Solution solution;
    vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxWidth = 16;

    vector<string> justifiedText = solution.fullJustify(words, maxWidth);

    for (const string &line : justifiedText)
    {
        cout << "\"" << line << "\"" << endl;
    }

    return 0;
}

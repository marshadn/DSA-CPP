
#include <iostream>
#include <algorithm>
using namespace std;

void printFreq(string s)
{

    sort(s.begin(), s.end());
    char ch = s[0];
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ch)
        {
            count++;
        }
        else
        {
            cout << ch << " :" << count << endl;
            count = 1;
            ch = s[i];
        }
    }
    cout << ch << " :" << count << endl;
}

int main()
{
    string str = "Helloworld";
    printFreq(str);
    return 0;
}
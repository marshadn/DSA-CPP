// Write a program to sort characters (numbers and punctuation symbols are not included) in a given string.
#include <bits/stdc++.h>

using namespace std;
string solve(string str)
{
    sort(str.begin(), str.end());
    return str;
}
int main()
{

    // Input string
    string str = "zxcbg";
    int length = str.length();

    cout << "String after sorting:" << "\n";
    cout << solve(str) << "\n";
    return 0;
}
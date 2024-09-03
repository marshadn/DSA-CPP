/*Write a program to concatenate one string's contents to another.
 Concatenation means to join two (or more) strings and form a combined string having the characters
of both ( or all) strings in the same order as they were before in separate strings.
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string str1 = "Hello";
    string str2 = "World";

    str1.append(str2);

    cout << str1;
}
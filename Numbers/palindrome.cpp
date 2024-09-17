#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1201;
    int ld;
    int rev = 0;
    int dup = n;
    while (n > 0)
    {
        ld = n % 10;
        rev = (rev * 10) + ld;
        n /= 10;
    }

    if (dup == rev)
    {
        cout << dup << " is PALINDROME!";
    }
    else
    {
        cout << dup << " is NOT A PALINDROME!!!";
    }
}
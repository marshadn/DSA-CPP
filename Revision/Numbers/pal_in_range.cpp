// palindrome nunmber in a given range

#include <bits/stdc++.h>
using namespace std;
bool ispal(int n)
{
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
        return true;
    return false;
}
int main()
{

    int n1 = 10;
    int n2 = 100;
    for (int i = n1; i <= n2; i++)
    {
        if (ispal(i))
            cout << i << "  ";
    }
}
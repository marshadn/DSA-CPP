#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n)
{

    int rev = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
    }
    if (rev == dup)
        return true;
    return false;
    return n;
}

int main()
{
    int n;
    cin >> n;
    cout << reverseNum(n);
    return 0;
}
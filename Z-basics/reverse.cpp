#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n / 10;
        }
    return rev;
}

int main()
{
    int n;
    cin >> n;
    cout << reverseNum(n);
    return 0;
}
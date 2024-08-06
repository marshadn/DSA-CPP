#include <bits/stdc++.h>
using namespace std;
int reverseNum(int n)
{

    int sum = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (sum == dup)
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
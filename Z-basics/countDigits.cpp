#include <bits/stdc++.h>
using namespace std;
int cnt(int n)
{
    // int cnt = 0;
    // while (n > 0)
    // {
    //     cnt = cnt + 1;
    //     n = n / 10;
    // }
    // return cnt;
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    cout << cnt(n);
    return 0;
}
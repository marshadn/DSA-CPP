#include <bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
    if (b == 0)
        return a;
    else
        return hcf(b, a % b);
}
int main()
{
    // T.C=O(log(min(a,b))) && S.C=O(log(min(a, b))) SC is due to recursion

    // cout << hcf(91, 10);
    // optimized in S.C=O(1)
    cout << __gcd(11, 33);
}

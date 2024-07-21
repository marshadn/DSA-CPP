#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    if ((n & (n - 1)) == 0 && n > 0)
    {
        cout << n << " is power of 2";
    }
    else
    {
        cout << n << " not power of 2";
    }
    return 0;
}
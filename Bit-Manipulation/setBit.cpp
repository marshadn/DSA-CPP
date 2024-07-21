// check if ith bit is set or not
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number:";
    cin >> n;
    int i;
    cout << "Enter the index:";
    cin >> i;
    if ((n >> i) & 1)
    {
        cout << n << " is set";
    }
    else
    {
        cout << n << " is unset";
    }
    return 0;
}
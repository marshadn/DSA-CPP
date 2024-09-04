//to remove the last set bit(i.e, is 1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if ((n - 1) & n)
    {
        cout << "removed the last bit" << endl;
        cout << "After removal:" << ((n - 1) & n);
    }
    return 0;
}
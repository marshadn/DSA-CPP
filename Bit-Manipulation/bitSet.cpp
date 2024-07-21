// set the ith bit (if it is 0 then set to 1)
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
    if ((n | (1 << i)))
    {
        cout << "The " << i << "th bit is set";
        cout << "The bit after set:" << (n | (1 << i));
    }
    else
    {
        cout << "The " << i << "th bit is NOT set";
    }

    return 0;
}
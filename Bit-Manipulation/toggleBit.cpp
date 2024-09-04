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
    if ((1 << i) ^ n)
    {
        cout << i << " th bit is toggled/changed!" << endl;
        cout << "After toggling:" << ((1 << i) ^ n);
    }
    else
    {
        cout << "No";
    }
    return 0;
}
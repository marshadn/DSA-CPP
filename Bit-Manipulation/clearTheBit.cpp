// clear the ith bit(i.e, ith position bit turn into 0)
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
    if (n & ~(1 << i))
    {
        cout << "\n The " << i << " th bit is clear(Turn to 0):";
        cout << (n & ~(1 << i));
    }
    else
        cout << " The" << i << " th bit is NOT cleared";

    return 0;
}

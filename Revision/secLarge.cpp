#include <bits/stdc++.h>
using namespace std;

int secLarge(vector<int> &a, int n)
{
    int largest = a[0];
    int seclarge = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            seclarge = largest;
            largest = a[i];
        }
        else if (a[i] < largest && seclarge < a[i])
        {
            seclarge = a[i];
        }
    }
    return seclarge;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    secLarge(a, n);
    cout << secLarge(a, n);
    return 0;
}
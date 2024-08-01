#include <bits/stdc++.h>
using namespace std;

int is_sorted(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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
    is_sorted(a, n);
    cout << is_sorted(a, n);
    return 0;
}
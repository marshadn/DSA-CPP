// longest palindrome number in an arr

#include <bits/stdc++.h>
using namespace std;
bool isPal(int n)
{
    int rev = 0;
    int ld;
    int dup = n;
    while (n > 0)
    {
        ld = n % 10;
        rev = (rev * 10) + ld;
        n /= 10;
    }
    if (rev == dup)
    {
        return true;
    }
    return false;
}
int main()
{

    int arr[] = {22, 4, 1220221, 1221, 3333, 454, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (isPal(n) && arr[i] > res)
        {
            res = arr[i];
        }
    }
    if (res == INT_MIN)
    {
        return -1;
    }
    cout << res;
    return 0;
}
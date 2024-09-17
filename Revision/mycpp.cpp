#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 2, 13, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + n);
    // cout << arr[n - 1];

    // int maxi = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > maxi)
    //         maxi = arr[i];
    // }
    // cout << maxi;

    int maxi = arr[0];
    int sec = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi && maxi > sec)
            maxi = arr[i];
        arr[i] = sec;
    }
    cout << sec;
    return 0;
}

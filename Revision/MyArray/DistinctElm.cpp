// count the distinct elements in arr

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 4, 2, 10, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    cout << mpp.size();
    return 0;
}
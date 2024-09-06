// Repating elms in arr

// arr with 1st half asc and remainnig desc

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 3, 9, 1, 9, 5, 1, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mpp;
    for (int i = 0; i < len; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second != 1)
        {
            cout << it.first << "  ";
        }
    }

    return 0;
}
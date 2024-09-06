// arr with 1st half asc and remainnig desc

#include <bits/stdc++.h>
using namespace std;
void myfun(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << " occurs " << it.second << " times " << endl;
    }
}

int main()
{
    int arr[] = {3, 3, 9, 1, 9, 5, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    myfun(arr, len);
    return 0;
}
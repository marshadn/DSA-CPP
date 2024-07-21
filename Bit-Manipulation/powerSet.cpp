#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3};                // Correct array initialization
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int numOfSubsets = 1 << n;            // Total number of subsets is 2^n

    vector<vector<int>> ans; // To store all subsets

    for (int i = 0; i < numOfSubsets; i++)
    {
        vector<int> subset;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subset.push_back(arr[j]);
            }
        }
        ans.push_back(subset);
    }

    // Print all subsets
    cout << "{ ";
    for (const auto &subset : ans)
    {
        cout << "{ ";
        for (int x : subset)
        {
            cout << x << " ";
        }
        cout << "}";
    }
    cout << " }";
    return 0;
}

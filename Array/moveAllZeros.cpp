#include <bits/stdc++.h>
using namespace std;
vector<int> moveAllZerosToLast(vector<int> &arr, int n)
{

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // // Brute Force Approach
    // // step 1
    // vector<int> temp;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         temp.push_back(arr[i]);
    //     }
    // }
    // // step 2
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     arr[i] = temp[i];
    // }
    // // step 3
    // for (int i = temp.size(); i < n; i++)
    // {
    //     arr[i] = 0;
    // }
    // return arr;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveAllZerosToLast(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//This is the implementation of bs using iteration method

#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 4, 6, 7, 9};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter the target  value:";
    cin >> target;
    int res = bs(arr, 0, n - 1, target);
    if (res == -1)
        cout << target << " NOT found!!" << endl;
    else
        cout << target << " is found at index " << res;

    return 0;
}
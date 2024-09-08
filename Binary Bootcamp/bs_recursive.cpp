#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> &arr, int low, int high, int target)
{
    int mid = (low + high) / 2;
    if (low > high)
        return -1;
    else if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return bs(arr, mid + 1, high, target);
    else
        return bs(arr, low, mid - 1, target);
}

int main()
{
    vector<int> arr = {1, 2, 4, 5, 8, 29};
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
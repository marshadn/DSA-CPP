#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int target;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the target:";
    cin >> target;
    cout << endl;
    auto it = lower_bound(arr.begin(), arr.end(), target);
    if (it != arr.end())
        cout << "Lower bound of " << target << " is at the index " << it - arr.begin() << endl;
    else
        cout << target << " is larger than all arr elmns!.";
    return 0;
}
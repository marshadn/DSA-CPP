#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    int target;
    cout << "Enter target: ";
    cin >> target;
    auto it = upper_bound(arr.begin(), arr.end(), target);
    if (it != arr.end())
        cout << "Upper bound of " << target << " is at the index: " << it - arr.begin();
    else
        cout << "Array out . Please go back!";
    return 0;
}
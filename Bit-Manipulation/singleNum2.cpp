
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 3, 4, 2, 2, 4, 1, 4, 1, 2};
    sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i = i + 3)
    {
        if (arr[i] != arr[i - 1])
        {
            cout << arr[i - 1];
        }
        else
        {
            cout << arr[arr.size() - 1];
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2, 4, 1, 4, 1, 2};
    sort(arr.begin(), arr.end());

    // Loop through the sorted array to find the element that is not repeated thrice.
    for (int i = 0; i < arr.size(); i += 3)
    {
        // If the next element is not the same, print the current element
        if (i + 2 >= arr.size() || arr[i] != arr[i + 2])
        {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}

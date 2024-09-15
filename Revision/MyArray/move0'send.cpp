// move all the zeros to the end..

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 12, 43, 0, 0, 4, 0, 0, 5, 0};
    int n = arr.size();
    cout << " Before : ";
    for (int el : arr)
    {
        cout << el << " ";
    }
    cout << endl;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout << " After : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
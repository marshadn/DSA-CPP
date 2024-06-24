#include <bits/stdc++.h>
using namespace std;
int secondSmallestElemnt(vector<int> &arr, int n)
{

    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
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
    secondSmallestElemnt(arr, n);
    cout << "Second Smallest element is " << secondSmallestElemnt(arr, n) << endl;
}
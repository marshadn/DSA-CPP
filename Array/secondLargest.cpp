#include <bits/stdc++.h>
using namespace std;
int secondLargestElemnt(vector<int> &arr, int n)
{

    int largest = arr[0];
    int second_largest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
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
    secondLargestElemnt(arr, n);
    cout << "Second Largest element is " << secondLargestElemnt(arr, n) << endl;
}
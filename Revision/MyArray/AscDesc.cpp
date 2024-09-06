// arr with 1st half asc and remainnig desc

#include <bits/stdc++.h>
using namespace std;
void myfun(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n / 2; i++)
        cout << arr[i] << " ";
    for (int j = n - 1; j >= n / 2; j--)
        cout << arr[j] << " ";
}
int main()
{
    int arr[] = {3, 2, 6, 1, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    myfun(arr, len);
    return 0;
}
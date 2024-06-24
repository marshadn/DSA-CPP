#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void leftRotatebykPlaces(int arr[], int n, int k)
{
    // k = k % n;
    // int temp[k];
    // for(int i=0;i<k;i++){
    //     temp[i] = arr[i];
    // }
    // for (int i = k; i < n;i++){
    //     arr[i - k] = arr[k];      // Brut force approach
    // }
    // for (int i = n - k; i < n;i++){
    //     arr[i] = arr[i - (n - k)];
    // }

    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
}
int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int arr[n];
    cout << "Enter elems:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter k:";
    cin >> k;
    leftRotatebykPlaces(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
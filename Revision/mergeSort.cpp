// #include <bits/stdc++.h>
// using namespace std;
// int merge(vector<int> &arr, int low, int middle, int high)
// {
//     int left = low;
//     int right = middle + 1;
//     vector<int> temp;
//     while (left <= middle && right <= high)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp.push_back(left);
//             left++;
//         }
//         else
//         {
//             temp.push_back(right);
//             right++;
//         }
//     }
//     while (left <= middle)
//     {
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while (right <= high)
//     {
//         temp.push_back(arr[right]);
//         right++;
//     }
//     for (int i = low; i <= high; i++)
//     {
//         arr[i] = temp[i - low];
//     }
// }
// void merge_sort(vector<int> &arr, int low, int high)
// {
//     if (low == high)
//         return;
//     int middle = (low + high) / 2;
//     merge_sort(arr, low, middle);
//     merge_sort(arr, middle + 1, high);
//     merge(arr, low, middle, high);
// }
// void merge_sort(vector<int> &arr, int n)
// {
//     merge_sort(arr, 0, n - 1);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     merge_sort(arr, n);

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
// /*we ned two fns
//     1.merge()
//     2.m.s
//     we use 3 pointers
// */

#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
void merge_sort(vector<int> &arr, int n)
{
    mergeSort(arr, 0, n - 1);
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

    merge_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
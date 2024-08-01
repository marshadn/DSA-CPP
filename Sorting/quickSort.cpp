#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[i] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quicksort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partiotionIndex = partition(arr, low, high);
        quicksort(arr, low, partiotionIndex - 1);
        quicksort(arr, partiotionIndex + 1, high);
    }
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

    quicksort(arr, 0, arr.size() - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// int main(){
//     vector<int> quickSort(vector<int> arr);
//     qs(arr, 0, arr.size() - 1);
//     return arr;
//       }

#include <iostream>
using namespace std;
int linerSearch(int arr[], int num, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cout << "Enter the number you want to search: ";
    cin >> num;
    cout << linerSearch(arr, num, n);

    return 0;
}
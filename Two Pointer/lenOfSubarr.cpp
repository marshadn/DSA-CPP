// Length of subarray with k sum
#include <bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(int arr[], int n, int k)
{
    int left = 0;
    int right = 0;
    int max_len = 0;
    int sum = 0;

    while (right < n)
    {
        sum = sum + arr[right];
        if (sum > k)
        {
            sum = sum - arr[left];
            left++;
        }
        else if (sum <= k)
        {
            max_len = max(max_len, right - left + 1);
            right++;
        }
    }
    return max_len;
}
int main()
{

    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 20;

   
    cout << "Length = " << lenOfLongSubarr(arr, n, k);

    return 0;
}
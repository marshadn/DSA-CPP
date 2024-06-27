// find longest subarray with sum k (only for +ve numbers)
#include <iostream>
#include <vector>
using namespace std;
int longestSubArrWithKSum(vector<int> &arr, long long k)
{
    int left = 0;
    int right = 0;
    long long sum = 0;
    int maxLen = 0;
    int n = arr.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }
    return maxLen;
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
    long long k;
    cin >> k;
    cout << longestSubArrWithKSum(arr, k) << endl;

    return 0;
}
// check the code as well as output again I think something fishy!!
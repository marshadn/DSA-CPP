#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> output(n);
    output[0] = 1;
    for (int i = 1; i < n; i++)
    {
        output[i] = output[i - 1] * nums[i - 1];
    }
    int right = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        output[i] *= right;
        right *= nums[i];
    }
    return output;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Product except self: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

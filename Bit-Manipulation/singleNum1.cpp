
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int xorr = 0;
    int nums[] = {1, 2, 1, 3, 2, 4, 4};
    int size = sizeof(nums) / nums[0];
    for (int i = 0; i < size; i++)
    {
        xorr = xorr ^ nums[i];
    }
    cout << xorr;

    return 0;
}

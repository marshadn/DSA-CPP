// count the set bits(count coccurence of 1)
//  clear the ith bit(i.e, ith position bit turn into 0)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start;
    int goal;
    cout << "Enter the start & goal:" << "\n";
    cin >> start >> goal;
    int ans = start ^ goal;
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        ans = (ans & (1 << i));
        count++;
    }
    cout << count;
    return 0;
}

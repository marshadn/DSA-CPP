#include <bits/stdc++.h>
using namespace std;

int greedyCookies(vector<int> &greed, vector<int> &cookie)
{
    int n = greed.size();
    int m = cookie.size();
    int r = 0;
    int l = 0;

    sort(greed.begin(), greed.end());
    sort(cookie.begin(), cookie.end());

    while (l < m && r < n)
    {
        if (greed[r] <= cookie[l])
        {
            r++;
        }
        l++;
    }
    return r;
}
int main()
{
    vector<int> greed = {1, 5, 3, 3, 4};
    vector<int> cookie = {4, 2, 1, 2, 1, 3};

    cout << "Array Representing Greed: ";
    for (int i = 0; i < greed.size(); i++)
    {
        cout << greed[i] << " ";
    }
    cout << endl;
    cout << "Array Representing Cookie Size: ";
    for (int i = 0; i < cookie.size(); i++)
    {
        cout << cookie[i] << " ";
    }

    int ans = greedyCookies(greed, cookie);

    cout << endl
         << "No. of kids assigned cookies " << ans;
    cout << endl;
    return 0;
}
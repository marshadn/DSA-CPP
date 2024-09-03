#include <bits/stdc++.h>
using namespace std;
int main()
{

    int dec = 11;
    string res = "";
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        while (dec > 0)
        {
            if (dec % 2 == 1)
            {
                res += "1";
            }
            else
            {
                res += "0";
            }
            dec = dec / 2;
        }
    }
    reverse(res.begin(), res.end());
    cout << res;
    return 0;
}
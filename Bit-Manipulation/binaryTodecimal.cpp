#include <bits/stdc++.h>
using namespace std;
int main()
{
    string bin = "110";
    int base = 1;
    int dec = 0;
    if (bin == "0")
    {
        cout << "0";
    }
    else
    {
        for (int i = bin.length() - 1; i >= 0; i--)
        {
            if (bin[i] == '1')

                dec += base;
            base *= 2;
        }
    }
    cout << dec;
    return 0;
}
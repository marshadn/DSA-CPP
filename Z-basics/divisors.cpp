#include <bits/stdc++.h>
using namespace std;

void divisors(int n, vector<int> &v)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {

            v.emplace_back(i);

            if (n / i != i)
            {
                v.emplace_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> v;
    divisors(n, v);

    cout << "Divisors of " << n << " are: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

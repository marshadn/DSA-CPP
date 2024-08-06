#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (prime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}

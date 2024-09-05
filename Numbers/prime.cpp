#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    int i;
    if (n <= 1)
        return false;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            break;
                }
    }
    if (i > sqrt(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << n << " is prime";
    }
    else
    {
        cout << n << " is not prime";
    }

    return 0;
}
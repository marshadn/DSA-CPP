#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 4; i >= 0; i--)
    {
        for (int j = n; j >= i; j--)
        {
            cout << n - j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
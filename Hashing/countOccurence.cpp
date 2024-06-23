#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the number:";
    cin >> num;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count += 1;
        }
        
    }
    cout << count;
    return 0;
}
//but O(n*n) TC so hashing is better
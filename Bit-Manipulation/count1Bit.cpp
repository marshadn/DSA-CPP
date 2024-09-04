// // count the set bits(count coccurence of 1)
// //  clear the ith bit(i.e, ith position bit turn into 0)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n > 1)
    {
        if (n % 2 == 1)
            cnt++;
        n /= 2;
        if (n == 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}


                //OR
// #include <bits/stdc++.h>
// using namespace std;
// int countSetBits(int n)
// {
//     int count = 0;
//     while (n != 0)
//     {
//         if (n % 2 == 0)
//         {
//             n = n & (n - 1);
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int n;
//     cout << "Enter the number:";
//     cin >> n;
//     cout << "The no.of count bits:" << countSetBits(n);

//     return 0;
// }

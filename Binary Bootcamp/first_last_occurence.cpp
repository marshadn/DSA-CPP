// in an arr 1st and last occurence of a same number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 3, 5, 8, 8, 8, 9, 80};
    int first = -1;
    int last = -1;
    int num = 8;

    // This is B.F method having o(n) T.C
    // Also we can use lower+bound for 1st index and uppr-1 for last index,then T/C(o(2 log n))
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == num)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    cout << "first occurence of " << num << " is: " << first << " last is: " << last;
    return 0;
}
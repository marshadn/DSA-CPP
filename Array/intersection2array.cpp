#include <bits/stdc++.h>
using namespace std;
vector<int> sortedArrayIntersection(vector<int> arr1, int n1, vector<int> arr2, int n2)
{

    int i = 0;
    int j = 0;
    vector<int> res;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            res.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return res;
}
int main()
{
    int n1;
    cin >> n1;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    int n2;
    cin >> n2;
    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    vector<int> res = sortedArrayIntersection(arr1, n1, arr2, n2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
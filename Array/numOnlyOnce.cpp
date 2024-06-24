#include <iostream>
#include <vector>
using namespace std;
int getSingleElement(vector<int> &arr)
{
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = xorr ^ arr[i];
    }

    return xorr;
}
int main()
{
    vector<int> arr = {2, 4, 3, 4, 2};
    cout << "Single Element is " << getSingleElement(arr) << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> res;
        for (int i = 1; i <= n; i++) // Start from 1 instead of 0
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                res.push_back("FizzBuzz");
            }
            else if (i % 5 == 0)
            {
                res.push_back("Buzz");
            }
            else if (i % 3 == 0)
            {
                res.push_back("Fizz");
            }
            else
            {
                res.push_back(to_string(i));
            }
        }
        return res;
    }
};

int main()
{
    Solution solution;
    int n = 15;
    vector<string> output = solution.fizzBuzz(n);

    for (const string &s : output)
    {
        cout << s << endl;
    }

    return 0;
}

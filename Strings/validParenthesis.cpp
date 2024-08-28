#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        unordered_map<char, char> brackets = {
            {')', '('},
            {']', '['},
            {'}', '{'}};

        for (char c : s)
        {
            if (brackets.count(c))
            {
                // If the stack is empty or the top doesn't match the corresponding opening bracket
                if (st.empty() || st.top() != brackets[c])
                {
                    return false;
                }
                st.pop(); // Remove the matching opening bracket
            }
            else
            {
                st.push(c); // Push the opening bracket onto the stack
            }
        }

        return st.empty(); // If the stack is empty, all brackets were matched correctly
    }
};

int main()
{
    Solution solution;
    string s = "{[()]}";

    if (solution.isValid(s))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}

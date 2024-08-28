#include <iostream>
#include <cctype> // For isalnum and tolower
#include <string>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0, right = s.length() - 1;

        while (left < right)
        {
            // Move left pointer to the next alphanumeric character
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }
            // Move right pointer to the previous alphanumeric character
            while (left < right && !isalnum(s[right]))
            {
                right--;
            }

            // Compare the characters at left and right pointers
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main()
{
    Solution solution;
    string s = "A man, a plan, a canal: Panama";

    if (solution.isPalindrome(s))
    {
        cout << "Valid Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}

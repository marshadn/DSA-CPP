// using xor

#include <iostream>
using namespace std;
int main()
{
    int a = 6;
    int b = 5;
    cout << "Before swapping:" << "\n a =" << " " << a << "\n b =" << " " << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping:" << "\n a =" << " " << a << "\n b =" << " " << b;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int b = 6;
    cout << "following are logical operators" << endl;
    cout << "the value of this logical and operator in c++ ((a==b)&& (a<b)) is  :"
         << ((a == b) && (a < b)) << endl;
    cout << "the value of this logical or operator ((a==b) || (a<b)) is "
         << ((a == b) || (a < b)) << endl;
    cout << "the value of this logical not operator (!(a==b)) is "
         << (!(a == b)) << endl;
    return 0;
}
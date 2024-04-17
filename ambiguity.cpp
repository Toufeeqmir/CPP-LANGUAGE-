#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "how are u:" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "How was the day with my love :" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a, b;
};

int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();

    return 0;
}
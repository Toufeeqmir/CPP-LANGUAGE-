#include <iostream>
using namespace std;
class employee
{
    int a;
    int b;

public:
    int c, d;
    void setdata(int a1, int b1);
    void getdata()
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value  of c is " << c << endl;
        cout << "the value of d is " << d << endl;
    }
};
void employee::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    employee toufeeq;
    toufeeq.c = 54;
    toufeeq.d = 76;
    toufeeq.setdata(4, 3);
    toufeeq.getdata();
    return 0;
}
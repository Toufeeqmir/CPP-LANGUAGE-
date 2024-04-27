#include <iostream>
using namespace std;
class universty
{
    char iust;
    char DU;

public:
    char iit;
    char nit;

    void setdata(char iust1, char DU1);
    void getdata()
    {
        cout << "the best btech is in iust " << iust << endl;
        cout << "the second best in DU" << DU << endl;
        cout << "the third best in iit" << iit << endl;
    }
};

void universty::setdata(char iust1, char DU1)
{
    iust = iust1;
    DU = DU1;
}
int main()
{
    universty college;
    college.iit = 3;
    college.nit = 5;
    college.setdata(1, 2);
    college.getdata();

    return 0;
}
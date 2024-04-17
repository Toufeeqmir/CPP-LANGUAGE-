#include<iostream>
using namespace std;
class point {
    private:
    int a, b;
    public :
    point(int x =0 , int y =0):a(x) , b(y){}

    void print()
    {
        cout<<a<<b<<endl;
    }
    point operator-(){
        return point(-a , -b);

    }
};
int main(){
   
point p1(1 ,2) , p2 , p3;
p1.print();
p2.print();
p3 =-p1;
p3.print();
}
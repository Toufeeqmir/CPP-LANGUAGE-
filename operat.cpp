#include<iostream>
using namespace std;
class point{
    int x , y;
    public:
    point(int x =0 , int y =0):x{x} , y{y}{}
    point operator +(point&rhs){
        point p ;
        p.x = x + rhs.x;
        p.y = y + rhs.y;
        return p;
    }
    void print(){
        cout<<"x :" << x <<" y :"<<y <<endl;
    }
};

int main(){
    point p1(3,2) , p2(4,5);
    point p3 = p1 + p2;
    p3.print();

}
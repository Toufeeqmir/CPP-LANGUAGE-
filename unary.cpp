#include<iostream>
using namespace std;
class complex{
    private:
    int a , b;
    public :
    
    void setdata(int x , int y){
        a = x , b=y;
    }
    
    void showdata(){
        cout<<a<<b<<endl;
    }
    complex operator-(){
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
    complex operator+(){
        complex temp;
        temp.a=+a;
        temp.b=+b;
        return temp;
    }
    
};
int main(){
    complex c1 , c2 ,c3 ,c4;
    c1.setdata(4,3);
    c2.setdata(5,3);
    c3=-c1;
    c4 =+ c1;
    c4.showdata();
    c3.showdata();

}
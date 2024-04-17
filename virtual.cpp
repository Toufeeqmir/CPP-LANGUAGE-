#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"Base class is called"<<endl;
    }
};
class B : public A{
    public :
    void show(){
        cout<<"Base2 is called"<<endl;
    }
};
int main(){
    A*bptr ; 
    B aa;
      bptr=&aa;
     bptr-> show();
     
}

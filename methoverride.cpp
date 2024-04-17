#include<iostream>
using namespace std;
class Animal{
  virtual   void sound(){
        cout<<"the animal has its own sound";
    }
};
class dog:public Animal{
    public:
    void sound() override{
        cout<<"dog barks"<<endl;
    }
};
class cat:public Animal{
    public:
    void sound() override{
        cout<<"cat meows "<<endl;

    }
};
int main(){
    dog d;
    cat c;
    d.sound();
    c.sound();
}
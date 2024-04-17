#include<iostream>
using namespace std;
class Base{
    public:
    int publicvar;
    void publicfun(){
        cout<<"public function is called";
    }
    protected:
    int protectedvar;
    void protectedfun(){
        cout<<"Protected function is called";
    }
    private:
    int privatevar;
    void privatefun(){
        cout<<"private function is called";
    }
};
class Derived_public :public Base{
    public:
    void acessbase(){
        publicvar = 10;//acessable
        protectedvar=20;//acrssible
        //private = 30 //not acessible

        publicfun();
        protectedfun();
        //privatefun()//not accessible



    }
};
class Derived_private :private Base{
    public :
    void acessBAsemembers(){
        //all base members become private here
    }
};
class Derived_protected: protected Base{
    public :
    void acessBasemembers(){
        //all base members become protected here
    }
};
int main(){
    Derived_public d1;
    d1.acessbase();//Acessibel

    Derived_private d2;


}
# include<iostream>
# include<cmath>
using namespace std;
class scientificcalculator{
    int a , b;
    public:
    void getdatascientific(){
        cout<<"enter the value of a :"<<a<<endl;
        cin>>a;
        cout<<"enter the value of b :"<<b<<endl;
        cin>>b;
    }
    void performoperationsscientific(){
        cout<<"the value of cos(a) :"<<cos(a)<<endl;
        cout<<"the value of sin(b) :"<<sin(b)<<endl;
        cout<<"the value of tan(a) :"<<tan(a)<<endl;
        cout<<"the value of cosec(b):"<<cos(b)<<endl;
    }
};
class simplecalculator{
    int a , b;
    public:
    void getdatasimple(){
        cout<<"the value of a :"<<a<<endl;
        cout<<"the value of b :"<<b<<endl;
        cin>>a;
        cin>>b;
    }
    void performoperationsimple(){
        cout<<"the value of a + b is :"<<a+b<<endl;
        cout<<"the value of a - b is :"<<a-b<<endl;
        cout<<"the value of a*b is :"<<a*b<<endl;
        cout<<"the value of a/b is ;"<<a/b<<endl;
    }
};
class hybridcalculator: public scientificcalculator , public simplecalculator{

};


    int main(){
        hybridcalculator  calc;
        calc.getdatasimple();
        calc.performoperationsimple();
        calc.getdatascientific();
        calc.performoperationsscientific();

    
return 0;
}
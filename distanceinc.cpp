#include<iostream>
using namespace std;
class Distance{
    int inch;
    int feet;
    public:
    Distance(int f =0 , int i =0) : feet(f) , inch(i){}
    Distance operator +(Distance & d){
        int totalinches = (feet*12 + inch) + (d.feet*12 + d.inch);//total inches = (feet*12 + inch) + (d.feet*12 + d.inch)
        int newfeet = totalinches/12;
        int newinches = totalinches%12;
        return Distance  (newfeet , newinches);
    }
    void display(){
        cout<<"feet :" << feet <<"inches :"<< inch<<endl;
    }
};
int main(){
    Distance d1(3 ,2);
    Distance d2(5,4);
    Distance sum = d1 + d2;
   
    cout<<"sum of distances is :"<<endl;
    sum.display();
}

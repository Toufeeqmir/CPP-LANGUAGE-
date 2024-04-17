// #include <iostream>
// using namespace std;
// class employee
// {
// private:
//     int a, b, c;

// public:
//     int e, w;

//     void setData(int a1, int b1, int c1);
//     void getData()
//     {
//         cout << "the value of a is " << a << endl;
//         cout << "the value of b is " << b << endl;
//         cout << "the value of c is " << c << endl;
//         cout << "the value of e is " << e << endl;
//         cout << "the value of w is " << w << endl;
//     }
//     };
//     void employee ::setData(int a1, int b1, int c1)
//     {
//         a = a1;
//         b = b1;
//         c = c1;
//     }
//     int main()
//     {
//         employee faizan;
//         faizan.e = 32;
//         faizan .w = 56;
//         faizan.setData(2,3,1);
//         faizan.getData();

//         return 0;
//     }
#include<iostream>
using namespace std;
class employee{
    private:
    int a , b , c;
    public :
    int e , w ;
    void setData(int a1, int b1 , int c1);
    void getData(){
        cout<<"the value of a is "<< a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of e is"<<e<<endl;
        cout<<"the value of w is "<<w<<endl;
    }
};
void employee ::setData(int a1 , int b1 , int c1){
    a = a1;
    b = b1 ;
    c=c1;
}
int main(){
employee toufeeq;
toufeeq.e = 33;
toufeeq.e=44;
toufeeq.setData(3,4,3);
toufeeq.getData();
}
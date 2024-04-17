// #include<iostream>
// using namespace std;
// class divide {
//     private :
//     int a , b;
//     public :
//     divide(int num =0 , int n1 = 1): a(num) , b(n1){}
//     divide operator /(divide other){
//         return divide(a/other.a , b/other.b);

        
//         }
//         void display(){
//             cout<<"Result :"<<a << "/" <<b <<endl;
//     }
// };
// int main(){
// divide d1(10 , 2);
// divide d2(4 , 2);
// divide result = d1/d2;
// result.display();
// }

#include<iostream>
using namespace std;
class modulo{
    private :
    int value;

    public :
    modulo(int v =0) : value(v){}
    modulo operator %(modulo & other){
        return modulo(value % other.value);

    }
    void display(){
        cout<<"Remainder :"<<value<<endl;
    }
};

int main(){
modulo num1(10);
modulo num2(5);
modulo remainder =num1%num2;
remainder.display();
}
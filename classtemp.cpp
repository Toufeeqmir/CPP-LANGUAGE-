// #include<iostream>
// using namespace std;
//     template<class s>
// class demo{
//     private :
//     s num1 , num2;
//     public:
//     demo(s n1 , s n2)
//     {
//         num1 = n1;
//         num2 = n2;

//     }
//     void check(){
//         if(num1 > num2){
//             cout<<num1<<" :is largest number"<<endl;


//         }
//         else{
//             cout<<num2<<" :is largest number"<<endl;
//         }
//     }
// };
// int main(){
//     demo <int> obj(4,3);
//     demo <float> obj2(3.2 , 4.2);
//     obj.check();
//     obj2.check();
// }
#include<iostream>
using namespace std;
//class template
template<class s>
class largest{
    private:
    s num1 , num2;
    public :
    largest(s n1 , s n2){
        num1 = n1;
        num2 = n2;

    }
    void check(){
        if(num1>num2){
            cout<<num1<<" : is largest number"<<endl;

        }
        else{
            cout<<num2<<": is largest number"<<endl;
        }
    }
};
int main(){
    largest <int> obj(3 ,2);
    obj.check();
}
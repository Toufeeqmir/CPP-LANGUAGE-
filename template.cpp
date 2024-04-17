// // #include <iostream>
// // using namespace std;
// // // Template are powerful feature of c++ that allows you to write a generic programs in simple terms you can create a single functions or a class to work with
// // // different data type using templates;
// // template <class T>

// // T sum(T a, T b)
// // {
// //     cout << "Total is :" << a + b;
// // }
// // int main()
// // {
// //     sum(3.2, 5.6);
// // }
// //function template
// #include<iostream>
// using namespace std;
// template<class t>
// t sum(t a, t b){
//     cout<<"total is :"<<a + b<<endl;
// }
// int main(){
//     sum(3.2 , 2.1);
// }

#include<iostream>
using namespace std;
template<class n>
n sum(n a , n b){
    cout<<"total is :"<<a*b<<endl;

}
int main(){
    sum(3.4 , 2.2);
}
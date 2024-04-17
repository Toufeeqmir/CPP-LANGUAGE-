// #include<iostream>
// using namespace std;
// int sum(int a , int b){
//     return a + b;

// }
//  float  sum1(float a , float b){
//     return a+b;

// }
// int
//  main(){
//    cout<<sum(4,5)<<endl;
//    cout<<sum1(4.5 , 3.3)<<endl;
// }

#include<iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}
string sum(string a , string b){
    return a+b;
}
int main(){
    cout<<sum(4,3) <<endl;
    cout<<sum("toufeeq" , "mir")  <<endl;

}
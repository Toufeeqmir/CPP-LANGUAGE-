// #include<iostream>
// using namespace std;
// int main(){
//     int a , b , result;
//     cout<<"Enter the two numbers :";
//     cin>>a>>b;
//  try{
//     if(b!=0){
//         result = a/b;
//         cout<<"Result :"<<result;

//     }
//     else throw(b);
//  }
//  catch(int number){
//     cout<<"Divide by zero is not allowed";
//  }
// }
#include<iostream>
using namespace std;
int main(){
   int a , b , result;
   cout<<"Enter the value of a and b :"<<endl;
   cin>>a>>b;
   try{
      if(b!=0){
         result = a/b;
         cout<<"Result :"<<result;

      }
      else throw(b);
   }
   catch(int number){
      cout<<"Divide by zero is not allowed ";
   }
}
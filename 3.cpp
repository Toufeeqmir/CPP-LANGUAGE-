#include<iostream>
using namespace std;
double power(double , int );
int main(){
double answer , num;
int pow;
char ch;
cout<<"Enter the number";
cin>>num;
cout<<"you want to enter the numbe Y/N";
cin>>ch;
if(ch =='y'|| ch =='N'){
    cout<<"Enter the power of num";
    cin>>pow;
    answer  = power(pow , num);
    
}
// else{
//     answer = power(num);
// }
cout<<"the value of power is "<<answer<<endl;
}
double power(double n , int power){
    double ans = 1.0;
    for(int i =0;i<power;i++){
        ans *=n;

    }
    return ans;

}
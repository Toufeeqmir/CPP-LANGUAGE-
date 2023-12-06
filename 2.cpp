#include<iostream>
using namespace std;
int main(){
    int n ;
    int i = 1;
    int f = 1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(i<=n){
        f*=i;
        i++;
    }
    cout<<f<<endl;


}
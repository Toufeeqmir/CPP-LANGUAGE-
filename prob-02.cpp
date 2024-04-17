# include<iostream>
using namespace std;

int a = 3;//global variable
void fuc(){
    cout<<a<<endl;
}
int main(){
    int a = 5;//local variable.
    cout<<a<<endl;
    fuc();
    return 0;
}
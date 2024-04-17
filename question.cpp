#include<iostream>
using namespace std;
void func(int &x) {
    x = 10; // Changes made to x will affect the original variable
    //pass by pointer
    void fun(int *x){
        *x = 20;
    }
}

int main() {
    int num = 5;
    func(num);
    func(&num);
    // num will now be 10 here
    return 0;
}


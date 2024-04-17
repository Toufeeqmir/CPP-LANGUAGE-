#include<iostream>
using namespace std;
class Test{
    private:
    int *arr , n;
    public:
    Test(int m){
        n = m;
        arr= new int[m];
    }
    void getdata();
    Test(){
        delete arr;
    }
    void Test:: getdata(){
        int i;
        cout<<"Enter the elements";
        cin>>arr[i];
    
    }
};
int main(){
    Test t(10);
    t.getdata();
}
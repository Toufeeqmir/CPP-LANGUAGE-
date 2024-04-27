# include<iostream>
using namespace std;
   /*void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;*/

    void swappointer(int *a , int *b){
        int temp = *a;
         *a =*b;
         *b=temp;
    }
   
    int main(){
    int x = 7;
    int y =4 ;
   // cout<<"the sum of x and y is "<<(x+y)<<endl;
    //cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
    swappointer(&x , &y);
    cout<<"the value of x is "<<x<<" and the value of y is "<<y<<endl;
return 0;
}
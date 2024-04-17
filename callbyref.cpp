# include<iostream>
using namespace std;
  void swaprefvar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
  }
    int main(){
    int v = 6;
    int w = 3;
    cout<<"the value of v is "<<v<<" and the value  of w is "<<w<<endl;
    swaprefvar(v , w);
    cout<<"the value of v is "<<v<<" and the value of w is "<<w<<endl;
return 0;
}
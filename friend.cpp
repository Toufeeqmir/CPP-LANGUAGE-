# include<iostream>
using namespace std;
class v;
class w{
    int a;
   public:
    void setdata( int value 1){
        cout<<"value 1"<<endl;


    }

};
class v{
    
    int b;
    public:
    friend voidsetdata(a , b);
    void setdata(int value 2 ){
         
        cout<<"value 2"<<endl; 
    }
};
    int main(){
    
return 0;
}
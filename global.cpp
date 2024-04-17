# include<iostream>
using namespace std;
# include<math.h>;
/*int a = 5;//global
void func(){
    cout<<a<<endl;
}
int main(){
    int b = 4;
    cout<<b<<endl;
    func();*/
   
    int main(){
        int a ;
        int b;
        char op;
        float result;
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the op";
        cin>>op;
        cout<<"enter the value of b"<<endl;
        cin>>b;
        

        switch(op){
            case '+':
            result = a + b;
            cout<<" result";
            break;

            case '*':
            result = a * b;
            cout<<" result";
            break;
        }
            return 0;
        
    }
     
    
   
   
   
 

 
 
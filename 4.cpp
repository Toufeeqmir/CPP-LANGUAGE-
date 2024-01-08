// #include<iostream>
// using namespace std;
// int main(){
//     int num = 22;
//     if(num>21){
//         cout<<"Yes";
//     }
// }
#include<iostream>
using namespace std;
#include <conio.h>;
int main()
{
    char dir = 'a';
    int x =10 , y =10;
    cout<<"Type Enter to quit\n";
    while(dir!='\r'){
        cout<<"\nyour locate is "<<x<<" , "<<y;
        cout<<"\npress direction key (n, s , e ,w ):";
        dir = getche();
        if(dir =='n'){
            y--;
        
        }
        else if(dir =='s'){
            y++;
        }
        else if(dir=='e'){
            x++;
        }
        else if(dir=='w'){
            x--;
        }
    }
    return 0;
}
# include<iostream>
using namespace std;
union money{
    int rice;
    char car;
    float pound;

};
    int main(){
        enum meal{
        breakfast, launch, dinner
        };
       // meal m1 = launch;
        //cout<<(m1==4);
       /* cout<<launch;
        cout<<breakfast;
        cout<<dinner;*/
        meal m1 = dinner;
        cout<<m1;


    
return 0;
}
# include<iostream>
using namespace std;

    int main(){
        int i;
    int marks[] = {24,54,64};
    int mathsmarks[3];
    marks[0]=53;
    marks[1]=98;
    marks[2]=46;
    cout<<"these are the maths marks";
    cout<<"maths marks[0]"<<endl;
    cout<<"maths marks[1]"<<endl;
    cout<<"maths marks[2]"<<endl;
    for(int i=0 ;i<3;i++){
    cout<<"the value of maths marks "<<i<<" is "<< marks[i]<<endl;

    } 
    
return 0;
}
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     // string str;
// //     // cout<<"Enter the string you want to enter";
// //     // cin>>str;
// //     // cout<<"you entered the string "<<str<<endl;
// //     string str = "hello world";
// //     char newChar = '!';
// //     str.push_back(newChar);//adding a new character
// //     cout<<"original string is"<<str<<endl;
// //     str = str + newChar;
// //    // str.pop_back();//deleting existing character
// //     cout<<"modified string is:"<<str<<endl;


// // }
// //swappin of two strings
// #include<iostream>
// using namespace std;
// int main(){
//     string str1 = "hello";
//     string str2 = "world";
//     cout<<"Before swappin "<<str1<<str2<<endl;
//     cout<<"string1 :"<<str1<<endl;
//     cout<<"String 2:"<<str2<<endl;
//     str1.swap(str2);
//     cout<<"After swapping "<<str1<<str2<<endl;
//     cout<<"String 1"<<str1<<endl;
//     cout<<"String 2"<<str2<<endl;
// }
#include<iostream>
using namespace std;
int main(){
    string str1 = "hello";
    string str2 ;
    str2.assign(str1);
    cout<<"copied string is:"<<str2<<endl;
}
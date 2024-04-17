 #include<iostream>
 using namespace std;
 class number{
     private:
     int a;
     public:
     number(): a(0){}
     number(int a):a(a){}
    

     bool operator<(number x){
         return a<x.a;
     }
     bool operator>(number y){
         return a>y.a;     }
         bool operator==(number z){
            return a==z.a;
         }
      bool operator>=(number q){
        return a>=q.a;
        
      }   


 };

 int main(){
    number n1(3);
    number n2(4);

    cout<<"n1 and n2 are less than :"<<(n1<n2)<<endl;
    cout<<"n1 and n2 are greater equal :"<<(n1>=n2)<<endl;
    

 }
// #include <iostream>

// class MyClass {
// private:
//     int value;
// public:
//     MyClass(int val) : value(val) {}

//     // Overloading '<' operator
//     bool operator<(const MyClass& other) const {
//         return value < other.value;
//     }

//     // Overloading '<=' operator
//     bool operator<=(const MyClass& other) const {
//         return value <= other.value;
//     }

//     // Overloading '>' operator
//     bool operator>(const MyClass& other) const {
//         return value > other.value;
//     }

//     // Overloading '>=' operator
//     bool operator>=(const MyClass& other) const {
//         return value >= other.value;
//     }

//     // Overloading '==' operator
//     bool operator==(const MyClass& other) const {
//         return value == other.value;
//     }

//     // Overloading '!=' operator
//     bool operator!=(const MyClass& other) const {
//         return value != other.value;
//     }
// };

// int main() {
//     MyClass obj1(5);
//     MyClass obj2(10);
//     MyClass obj3(5);

//     // Using overloaded relational operators
//     std::cout << "obj1 < obj2: " << (obj1 < obj2) << std::endl;
//     std::cout << "obj1 <= obj2: " << (obj1 <= obj2) << std::endl;
//     std::cout << "obj1 > obj2: " << (obj1 > obj2) << std::endl;
//     std::cout << "obj1 >= obj2: " << (obj1 >= obj2) << std::endl;
//     std::cout << "obj1 == obj3: " << (obj1 == obj3) << std::endl;
//     std::cout << "obj1 != obj2: " << (obj1 != obj2) << std::endl;

//     return 0;
// }

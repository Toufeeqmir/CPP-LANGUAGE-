#include <iostream>

class Base {
public:
    int publicVar;
    void publicFunction() {
        std::cout << "Public function called.\n";
    }
protected:
    int protectedVar;
    void protectedFunction() {
        std::cout << "Protected function called.\n";
    }
private:
    int privateVar;
    void privateFunction() {
        std::cout << "Private function called.\n";
    }
};

class Derived_Public : public Base {
public:
    void accessBaseMembers() {
        publicVar = 10;        // Accessible
        protectedVar = 20;     // Accessible
        // privateVar = 30;    // Not accessible
        publicFunction();      // Accessible
        protectedFunction();   // Accessible
        // privateFunction(); // Not accessible
    }
};

class Derived_Private : private Base {
public:
    void accessBaseMembers() {
        // All base members become private here
    }
};

class Derived_Protected : protected Base {
public:
    void accessBaseMembers() {
        // All base members become protected here
    }
};

int main() {
    Derived_Public d1;
    d1.accessBaseMembers();  // Accessible

    Derived_Private d2;
    // d2.accessBaseMembers();  // Not accessible

    Derived_Protected d3;
    // d3.accessBaseMembers();  // Not accessible


}

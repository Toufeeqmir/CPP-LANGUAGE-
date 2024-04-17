#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() : value(0) {}
    Number(int val) : value(val) {}

    // Overloading the less than operator (<)
    bool operator<(const Number& other) const {
        return value < other.value;
    }

    // Overloading the greater than operator (>)
    bool operator>(const Number& other) const {
        return value > other.value;
    }

    // Overloading the less than or equal to operator (<=)
    bool operator<=(const Number& other) const {
        return value <= other.value;
    }

    // Overloading the greater than or equal to operator (>=)
    bool operator>=(const Number& other) const {
        return value >= other.value;
    }

    // Overloading the equal to operator (==)
    bool operator==(const Number& other) const {
        return value == other.value;
    }

    // Overloading the not equal to operator (!=)
    bool operator!=(const Number& other) const {
        return value != other.value;
    }

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(5);
    Number num2(10);

    if (num1 < num2)
        cout << "num1 is less than num2" << endl;

    if (num1 > num2)
        cout << "num1 is greater than num2" << endl;

    if (num1 <= num2)
        cout << "num1 is less than or equal to num2" << endl;

    if (num1 >= num2)
        cout << "num1 is greater than or equal to num2" << endl;

    if (num1 == num2)
        cout << "num1 is equal to num2" << endl;

    if (num1 != num2)
        cout << "num1 is not equal to num2" << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    Number (int x) {
		num = x;
    }

    Number operator+(Number n) {
        return Number(num + n.num);
    }

    Number operator-(Number n) {
        return Number(num - n.num);
    }

    Number operator*(Number n) {
        return Number(num * n.num);
    }

    Number operator/(Number n) {
        if (n.num == 0) {
            cout << "Error: Division by zero!" << endl;
            return Number(0);
        }
        return Number(num / n.num);
    }

    void display() {
        cout << num << endl;
    }
};

int main() {
    int num1, num2, choice;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    Number n1(num1);
    Number n2(num2);
    cout << "\nARITHMETIC OPERATIONS\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice: ";
    cin >> choice;
    Number result(0);
    switch (choice) {
    case 1:
        result = n1 + n2;
        cout << "Addition of two numbers: ";
        result.display();
        break;
    case 2:
        result = n1 - n2;
        cout << "Subtraction of two numbers: ";
        result.display();
        break;
    case 3:
        result = n1 * n2;
        cout << "Multiplication of two numbers: ";
        result.display();
        break;
    case 4:
        result = n1 / n2;
        cout << "Division of two numbers: ";
        result.display();
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
    return 0;
}
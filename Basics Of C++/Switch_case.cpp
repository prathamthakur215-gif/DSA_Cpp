#include <iostream>
using namespace std;

int main() {
    cout << "--------Welcome To a Calculator-------\n";

    float a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    char op;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Error: Division by zero";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}

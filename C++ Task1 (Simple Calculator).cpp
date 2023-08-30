//SIMPLE CALCULATOR:

#include <iostream>
using namespace std;

//Add two numbers:
int add(int x, int y) {
    return x + y;
}

//Subract two numbers:
int subtract(int x, int y) {
    return x - y;
}

//Multiply two numbers:
int multiply(int x, int y) {
    return x * y;
}

//Divide two numbers:
float divide(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}
int main() {
    int num1, num2;
    int i;
	cout << "SIMPLE CALCULATOR" << endl;
    cout << "Operations:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    
//Inputs:
	cout << "Enter the first number: ";
    cin >> num1;
	cout << "Enter the second number: ";
    cin >> num2;
	cout << "Enter the operation number (1/2/3/4): ";
    cin >> i;
	switch (i) {
        case 1:
        	cout << "By Adding" << endl;
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
        	cout << "By Subtracting" << endl;
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
        	cout << "By Multiplying" << endl;
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
        	cout << "By Dividing" << endl;
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice. Please choose a valid operation." << endl;
    }
	return 0;
}


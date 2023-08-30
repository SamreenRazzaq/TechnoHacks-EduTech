//TEMPRATURE CONVERTOR:

#include <iostream>
using namespace std;

//Conversion from Fahrenheit to Celsius:
double FToC(double F) {
    return (F - 32) * 5.0 / 9.0;
}

//Conversion from Celsius to Fahrenheit
double CToF(double C) {
    return (C * 9.0 / 5.0) + 32;
}

int main() {
    int choice;
    double temp;

    cout << "TEMPRATURE CONVERTOR: " << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << temp << " Fahrenheit is " << FToC(temp) << " Celsius." << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << temp << " Celsius is " << CToF(temp) << " Fahrenheit." << endl;
    } else {
        cout << "Invalid choice." << endl;
    }
	return 0;
}


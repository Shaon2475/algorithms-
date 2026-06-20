#include <iostream>
using namespace std;


double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}


double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    int choice;
    double temperature, convertedTemp;

    cout << "Temperature Conversion Menu:" << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemp = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << convertedTemp << " °C" << endl;
    }
    else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemp = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << convertedTemp << " °F" << endl;
    }
    else {
        cout << "Invalid choice. Please select 1 or 2." << endl;
    }
}


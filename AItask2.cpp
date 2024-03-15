// A program that converts temperature from Celsius to Fahrenheit

#include <iostream>
using namespace std;

int main()
{
    int C, F;
    cout << "Enter the temprature in celsius: ";
    cin >> C;

    F=((C)*9/5)+32;

    cout << endl
         << "The temperature in Fahrenheit is: " << F << endl;
    return 0;
}
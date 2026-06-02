#include <iostream>
using namespace std;
int main()
{
    int celsius = 0;
    int Fahrenheit = 0;
    int choose = 0;
    double temp = 0;
    while (true)
    {
        cout << endl<< "Welcome to  the Temperature Converter " << endl;
        cout << "1 . Convert celsius into  the Fahrenheit " << endl;
        cout << "2 . Convert  Fahrenheit into  the Celsius " << endl;
        cout << "3 . Choose the valid input from the above " << endl;
        cout << "Enter the Your choose : " << endl;
        cin >> choose;
        if (choose == 1)
        {
            cout << "Enter temperature in Celsius : ";
            cin >> temp;
            Fahrenheit = (temp * 1.8) + 32;
            cout << "So the Temperature in the Fahrenheit is :- " << Fahrenheit << "F" << endl;
        }
        else if (choose == 2)
        {
            cout << "Enter temperature in Fahrenheit : ";
            cin >> temp;
            celsius = (temp - 32) * (5 / 9.0);
            cout << "So the Temperature in the Celsius is :- " << celsius << "C" << endl;
        }
        else if (choose == 3)
        {
            cout << "Exiting from the Temperature Converter... " << endl;
            break ;
        }
        else
        {
            cout << "Invalid Input choose from the above ";
        }
    }
    return 0;
}

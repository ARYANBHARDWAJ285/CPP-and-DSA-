#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // space print
        for (int space = 0 ; space < n - i - 1; space++)
        {
            cout << " ";
        }
        cout << "*";
        // space print
        if (i!= 0)
        {
            for (int space = 0; space < 2 * i - 1; space++)
            {
                cout <<" ";
            }
            cout <<"*";
        }
        cout << endl;
    }

    // bottom

    for (int i = 0; i < n - 1; i++)
    {
        for (int space = 0; space < i+1 ; space++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2)
        {
            for (int space = 0; space < 2 * (n - i) - 5; space++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}
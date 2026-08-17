#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :- ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout <<"  ";
        }
        for (int k = 0; k < i; k++)
        {
            cout <<"* ";
        }
        cout << endl;
    }
}
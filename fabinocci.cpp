#include <iostream>
using namespace std;

void fabinocci(int n)
{
    if (n < 1)
    {
        cout << "Invalid number :- ";
    }
    int prev1 = 1;
    int prev2 = 0;

    cout << prev2 << " ";

    if (n == 1)
    {
        cout << "You have enter  1 ";
    }

    cout << prev1 << " ";

    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
        cout << curr << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number :- ";
    cin >> n;

    fabinocci(n);
}
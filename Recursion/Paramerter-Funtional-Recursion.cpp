/*
  Here we are calculating the sum of n natural  number 
*/


#include <iostream>
using namespace std;

// Method :- 1 Parameterised way
void sumNatural(int i, int n, int sum)
{

    if (i > n)
    {
        cout << sum;
        return;
    }
    sum += i;
    sumNatural(i + 1, n, sum);
}

//  Method :- 2  Parameterised way

void sumNatural1(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumNatural1(i - 1, sum + i);
}

// Method  :- 3  Parameterised way
void sumNatural2(int n, int sum)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    sumNatural2(n - 1, sum + n);
}

//  Method :- 4 Funtional way

int sumNatural3(int n)
{
    if (n == 0)
        return 0;
    return n + sumNatural3(n - 1);
}

int main()
{
    int n;
    cin >> n;
    
    cout << "Method 1 :- ";
    sumNatural(1, n, 0);
    cout << endl;

    cout << "Method 2 :- ";
    sumNatural1(n, 0);
    cout << endl;

    cout << "Method 3 :- ";
    sumNatural2(n, 0);
    cout << endl;

    cout << "Method 4 :- ";
    cout << sumNatural3(n);

    return 0;
}

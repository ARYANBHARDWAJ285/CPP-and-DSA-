#include <iostream>
using namespace std;
void printNumber(int n, int count = 0)
{

    if (n < 0)
        return;
    cout << n << " ";
    printNumber(n - 1);
}
int main()
{
    int n;
    cin >> n;
    printNumber(n);

    return 0;
}
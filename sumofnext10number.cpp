#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter the number ";
    cin >> n;
    for (i = 1; i <= 10  ; i++)
    {
        n++;
        sum = sum + n;
       
    }
     cout << "The Sum we have is : " << sum << endl;
}
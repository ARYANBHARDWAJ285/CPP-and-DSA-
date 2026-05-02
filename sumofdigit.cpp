#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int reverse = 0;
    int sum =  0 ;

    while (n>0)
    {
        /* code */
        int remainder =  n %10 ;
        n =  n/ 10 ;
        sum +=  remainder ;
    }
    cout<<sum ;
    
    // while (n > 0)
    // {

    //     int remainder = n % 10;
    //     n = n / 10;
    //     reverse = reverse * 10 + remainder;
    // }

    // cout << reverse;
}
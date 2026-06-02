#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Enter the First number :";
    cin >> a;
    cout << "Enter the second  number :";
    cin >> b;
    cout << "Enter the third  number :";
    cin >> c;
    if(a > b && a >c)
    {
        cout<<"The First number is greater "  <<a <<endl ;
    }
    else if (b > c)
    {
        cout<<"The Second number is greater : " <<b <<endl ;
    }
    else 
    {
        cout<<"The third number is greater : " <<c <<endl ;
    }
    return 0 ;
}
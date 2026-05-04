#include <iostream>
#include <string>
using namespace std;

void printName(string s , int count = 0)
{
    
    if (count == 5)
    {
        return ;
    }
    else
    {
        cout << s << endl;
        count++;
    }
    printName(s , count);
}
int main()
{
    string s = "Aryan";
    int count = 0 ; 
    printName(s , count );

    return 0;
}
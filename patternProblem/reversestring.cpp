#include <iostream>
using namespace std;
int main()
{
    //  intizaling the string 
    
    char c[20];
    cout << "Enter Your name :- " << endl;
    cin >> c;

    //  counting the size of the string 

    int count = 0;
    cout << "Length of the string :- " << endl;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
        
    }
    cout << count << endl;

    //  reverse the string

    for (int i = count - 1 ; i >= 0; i--)
    {
        cout << c[i];
    }

    cout<<endl ;  
}
#include<iostream>

#include<string>

using namespace std ;

int main ()

{

string str1 = " " ;

string str2 = " " ;

cout<<"Enter the first string :- " ;

getline(cin ,  str1 ) ;

cout<<endl<<"Enter the second string :- " ;

getline(cin , str2 ) ;

if( str1.length() ==  str2.length())
{
    cout<<"equal" ;
}
else{
    cout<<"not equal ";
}
return 0 ;
}
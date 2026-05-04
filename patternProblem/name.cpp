#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    string firstName ,  lastName , fullName , address ;
     cout<<endl<<"Enter Your Address :- " ;
    getline(cin,address );
    cout<<"Enter your First Name :-  ";
    cin>>firstName ;
    cout<<"Enter Your Last Name :- "  ;
    cin>>lastName;
    
   
    fullName = firstName.append(lastName);
    
    cout<<"Your Full Name is :- " <<fullName<< "The Address You have enter :-  "<<address<<endl ; ;
}
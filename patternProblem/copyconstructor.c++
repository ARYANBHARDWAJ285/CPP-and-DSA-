#include<iostream>
using namespace std ;
class  A 
{ 
    string name ;
    int age ;
    public :
    A(string n , int a )
    {
        name = n ; 
        age = a ;
    }
    A(A &A)
    {
        name = A.name ;
        age = A.age ;
    }
    void show ()
    {
        cout <<name <<" "<<age<<endl ;
    }
};
int main()
{
   A obj("Aryan " , 16);
   obj.show();

   A ob(obj) ;
   ob.show() ;
}
#include<iostream>
using namespace std ;
// class A
// {
//     public :
//     A()
//     {
//         cout<<"cons of A "<<endl ;
//     }
//     virtual ~A()
//     {
//         cout<<"Dest od A"<<endl ;
//     }
// };
// class B : public A 
// {
//     public :
//     B()
//     {
//         cout<<"Cons of B"<<endl;
//     }
//     virtual ~B()
//     {
//         cout<<"dest of B"<<endl;
//     }
// };
// int main ()
// {

//     B* ob = new B();  // Dynamic object 
//     A* obj ;
//     obj = ob ;
//     delete obj ;


// }

class A
{
    public:
    string name ;
    int age ;
    A(string n , int a )
    {
        name = n ;
        age = a;
    }
    
    void  show ()
    {
        cout<<name<<" "<<age<<endl ;
    }
};
class B : public  A 
{
    public :
    string cname ;
    int sid ;
    B(string n , int a , string cn , int id) : A(n , a) // to call the constructor 
    {
        cname =  cn ;
        sid = id ;

    }
    void print()
    {
        cout<<name<<" "<<age<<" "<<cname<<" "<<sid<<endl ;
    }

};
int main()
{
    B obj("Aryan ", 16 , "kcc" , 25313) ;
    obj.print(); // to call B 
    obj.A::show();  // used to  call the from the A obj .

}
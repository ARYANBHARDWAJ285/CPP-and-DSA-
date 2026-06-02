#include<iostream>
using namespace std ;
class A 
{
    public:
    void show ()
    {
        cout<<"Class of A"<<endl ;
    }
};
class B  : virtual public A 
{
    public :
    void get ()
    {
        cout<<"Class of B "<<endl;
    }
};
class C : virtual public A
{
    public :
    void put ()
    {
        cout<<"Class of C" <<endl ;
        //show();
    }
};
class D : public B , public C 
{
    public :
    void data ()
    {
        cout<<"Class of D" <<endl ;    // here show is not call because compiler get comfused from which class he have to  show form B or from C so for that we have to use obj.class-name::show() and the second method to  call is put virtual befor the class name
        
    }
};
int main ()
{
    D obj ;
    obj.show();
    obj.get();
    obj.put();
    obj.show();
}




//  Avoiding ambiquity using the scope resolution operator 
// Avoiding ambiquity using the virtual base class 
#include<iostream>
using namespace std ;
class Vehicle 
{
    public :
    virtual void displayinfo()
    {
        cout<<"Bihari ke gadi"<<endl ;
    }

};
class car : public Vehicle 
{
    public:
    void displayinfo()
    {
        
        cout<<"Bihari ke car"<<endl;
    }

};
class bike : public Vehicle 
{
    public:
    void displayinfo()
    {
        cout<<"Bihari ke bike"<<endl;
    }

};
int main()
{
    Vehicle*  obj ;
    car ob ;
    bike ob1 ;
    obj =  &ob ;
    obj->displayinfo();
    obj = &ob1;
    obj->displayinfo();
}
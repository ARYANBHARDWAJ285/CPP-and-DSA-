#include <iostream>
using namespace std;
class A
{
    string name;
    int age;

public:
    A(string name , int age )
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << name<<" " << age << endl;
    }
};
int main()
{
    A obj("Aryan", 16);
    obj.show();
    return 0 ;
    
}
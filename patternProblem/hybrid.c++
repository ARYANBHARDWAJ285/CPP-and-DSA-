#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;


    void detail()
    {
        cout << "Enter the Name " << endl;
        getline(cin, name);

        cout << "Enter the Age " << endl;
        cin >> age;
    }
};
class Student : public Person
{
    public :
    int student_ID;

    void get()
    {
        cout << "Enter the student ID " << endl;
        cin >> student_ID;
    }
    void show()
    {
        cout << "Your namme is : " << name << endl;
        cout << "Your age is : " << age << endl;
        cout << "Your student ID is :- " << student_ID << endl;
    }
};

int main()
{
    Student obj ;
    obj.detail();
    obj.get();
    obj.show(); 
    
}
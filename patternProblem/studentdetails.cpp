// 5.	Write a C++ program to create a class for student to get and print details of a student. Following are the details of a student:

// Studid, name ,sem, branch.

#include <iostream>
using namespace std;
class Student
{
    string name;
    string branch;
    int sem;
    int studentid;

public:
    void getstudent()
    {
        cout << "Enter Your Name :- " << endl;
        getline(cin, name);
        cout << "Enter Your branch :- " << endl;
        getline(cin, branch);
        cout << "Enter your semester :- " << endl;
        cin >> sem;
        cout << "Enter the student id :- " << endl;
        cin >> studentid;
    }
    void printstudent()
    {
        cout << "You have enter :- " << name << endl;
        cout << "You have enter :- " << name << endl;
        cout << "You have enter :- " << name << endl;
        cout << "You have enter :- " << name << endl;
    }
};
int main()
{
    Student S;
    int i = 0;
    int n;
    cout << "Enter the number of the student :- " << endl;
    cin >> n;
    for (i; i <= n; i++)
    {
        S.getstudent();
    }
    for (i; i <= n; i++)
    {
        S.printstudent();
    }

    S.getstudent();
    S.printstudent();
    return 0;
}
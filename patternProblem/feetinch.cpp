#include <iostream>
using namespace std;
class Distance
{
public:
    int feet;
    int inch;
    void input()
    {
        cout << "Enter the feet ";
        cin >> feet;
        cout << "Enter the inch ";
        cin >> inch;
    }
    void ouput()
    {
        cout << "You have enter the lenth in the feet :- " << feet<<" " <<inch <<endl ;
    }
    
    Distance add(Distance temp)
    {
        Distance obj;
        obj.feet = feet + temp.feet;
        obj.inch = inch + temp.inch;

        if (obj.inch >= 12)
        {
            obj.feet = obj.feet + obj.inch / 12;
            obj.inch = obj.inch % 12;
        }
        return obj;
    }
};
int main()
{
    Distance d1  , d2 ;
    cout<<"First distance :- "<<endl ;
    d1.input() ;

    cout<<"Enter the Second Distance :- "<<endl;
    d2.input();

    Distance sum  = d1.add(d2);
    sum.ouput();
}
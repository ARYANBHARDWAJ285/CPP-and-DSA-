#include<iostream>
using namespace std ;
class Area
{
  float radius , area ; 
  public :
  void  getarea(float r )
  {
    radius = r ;
    area =  3.14f *radius*radius ;
    cout << "The area of the circle :- " << area <<endl ;


  }
};
int main ()
{
    float radius  , area ;
    cout << "Enter the Radius of the circle :-  " <<endl;
    cin >> radius ; 
    Area obj ;
    obj.getarea(radius);
    cout << "The area of the circle :- " << area <<endl ;
    
  
}
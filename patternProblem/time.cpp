#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
public:
    int hours, minutes, seconds;

    Time()
    {

        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    Time(int x, int y, int z)
    {
        hours = x;
        minutes = y;
        seconds = z;
    }
    Time add(Time temp)
    {
        Time obj;
        obj.hours = hours + temp.hours;
        obj.minutes = minutes + temp.minutes;
        obj.seconds = seconds + temp.seconds;

        if (seconds >= 60)
        {
            obj.minutes = obj.minutes + obj.seconds / 60;
            obj.seconds = obj.seconds % 60;
        }
        if (minutes >= 60)
        {
            obj.hours = obj.hours + obj.minutes / 60;
            obj.minutes = obj.minutes % 60;
        }

        return obj;
    }
    void display()
    {
        cout << setfill('0') << setw(2) << hours << " :" << setfill('0') << setw(2) << minutes << " :" << setfill('0') << setw(2) << seconds << " :" << endl;
    }
};
int main()
{
    Time t1(8, 66, 59), t2(1, 5, 6), t3;
    t3 = t1.add(t2);
    t3.display();
}
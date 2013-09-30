#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
    int hour, min;
    char seperator;
    while(true)
    {
        cin >> hour >> seperator >> min;

        if(hour == 0 && min == 0)
        {
            break;
        }

        //relative to 12:00
        float angularHour = (hour * 30.0) + (0.5 * min);

        float angularMin = min * 6;

        float angularGap = fabs(angularHour - angularMin);

        if(angularGap > 180)
            angularGap = 360 - angularGap;

        cout << std::fixed;
        cout << std::setprecision(3) << angularGap << "\n";
    }
}

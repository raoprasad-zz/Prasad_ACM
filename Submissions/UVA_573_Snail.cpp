#include<stdio.h>
#include<string>
using namespace std;

int main()
{
    int heightOfWell = 0, ascentRate = 0, descentRate = 0, fatigueFactor = 0;

    while(scanf("%d %d %d %d", &heightOfWell, &ascentRate, &descentRate, &fatigueFactor) >= 0)
    {
        if(heightOfWell == 0)
        {
            break;
        }

        int day = 0;
        bool succeeded = false;
        float distanceToScale = heightOfWell;

        while(true)
        {
            float rateOfAscent = ascentRate*(1 - (float)day*fatigueFactor/100);
            if(rateOfAscent > 0)
            {
                distanceToScale = distanceToScale - rateOfAscent;
            }

            if(distanceToScale < 0)
            {
               succeeded = true;
               break;
            }
            else
            {
                distanceToScale += descentRate;
                if(distanceToScale > heightOfWell)
                {
                    succeeded = false;
                    break;
                }
            }
            day++;
        }

        (succeeded)? printf("success on day %d\n", day + 1) : printf("failure on day %d\n", day + 1);
    }
}

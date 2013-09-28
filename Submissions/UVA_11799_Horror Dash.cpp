#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int numTests = 0;
    int temp = 1;
    scanf("%d", &numTests);

    while(numTests > 0)
    {
        int numRacers;
        cin >> numRacers;

        int maxSpeed = 0, currSpeed = 0;

        while(numRacers > 0)
        {
           cin >> currSpeed;

            if (currSpeed > maxSpeed)
            {
                maxSpeed = currSpeed;
            }
            numRacers--;
        }

        printf("Case %d: %d\n", temp++, maxSpeed);

        numTests--;
    }
}

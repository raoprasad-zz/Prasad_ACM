#include<stdio.h>
#include<iostream>
using namespace std;
int GetCycleCount(int number)
{
    int cycles = 0;
    unsigned long temp = number;
    if(number >= 1 && number <= 1000000)
    {
        while(temp != 1)
        {
            cycles++;
            if(temp%2 == 0)
            {
                temp = temp/2;
            }
            else
            {
                temp = 3*temp + 1;
            }
        }

        cycles++;
    }

    return cycles;
}
int GetMaxCycleCount(int numBegin, int numEnd)
{
    if(numBegin > numEnd)
    {
        swap(numBegin, numEnd);
    }
    int maxCount = 0;
    int currCount = 0;
    while(numBegin <= numEnd)
    {
        currCount = GetCycleCount(numBegin);

        if(maxCount < currCount)
        {
            maxCount = currCount;
        }
    }

    return maxCount;
}
int main()
{
    int numBegin = 0;
    int numEnd = 0;
    while (scanf("%d %d", &numBegin, &numEnd))
    {
        printf("d\n", GetMaxCycleCount(numBegin, numEnd));
    }
}

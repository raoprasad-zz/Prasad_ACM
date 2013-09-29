#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int matches = 0;

    cin >> matches;

    while(matches--)
    {
        int sum, diff;
        cin >> sum >> diff;

        if(sum < diff || (sum+diff)%2 != 0)
        {
            printf("impossible\n");
            continue;
        }

        printf("%d %d\n", (sum+diff)/2, (sum-diff)/2);
    }
}

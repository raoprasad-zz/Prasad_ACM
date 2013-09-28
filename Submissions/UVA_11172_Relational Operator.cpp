#include<stdio.h>
#include<string>
using namespace std;
char FindRelation(int first, int second)
{
    if(first > second)
        return '>';
    if(first < second)
        return '<';
    else return '=';
}
int main()
{
    int lineCnt = 0;
    int first = 0;
    int second = 0;
    scanf("%d", &lineCnt);
    while (lineCnt > 0)
    {
        scanf("%d %d", &first, &second);
        lineCnt--;
        printf("%c\n", FindRelation(first, second));
    }
}

#include <stdio.h>
int main()
{
int year;
scanf("%d",&year);
if(year%4==0)
{
    printf("%d is leap year",year);
}
else
{
    printf("%d is non-leap year",year);
}
    return 0;
}

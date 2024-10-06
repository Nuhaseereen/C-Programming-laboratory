#include <stdio.h>
int main()
{
int n1,n2;
scanf("%d%d",&n1,&n2);
if(n1>n2 || n1==n2)
{
    printf("the largest number is : %d",n1);
}
else
{
    printf("the largest number is: %d",n2);
}
    return 0;
}

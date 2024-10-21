#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    if(n1<n2){
        printf("%d is smallest",n1);
    }
    else if (n1==n2){
        printf("both are equal and  hence the smallest is %d",n1);
    }
    else{
        printf("%d is smallest",n2);
    }
    return 0;
}

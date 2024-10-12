#include <stdio.h>
int main() {
    int i,pro=1,sum=0,n;
    float avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
        pro=pro*i;
    }
    printf("sum=%d\npro=%d\n",sum,pro);
    avg=(float)sum/n;
    printf("avg=%.2f",avg);
    return 0;
}

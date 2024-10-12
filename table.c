#include <stdio.h>
int main() {
    int i,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<=m;i++){
     printf("%d*%d=%d\n",i,n,i*n);
    }
    return 0;
}

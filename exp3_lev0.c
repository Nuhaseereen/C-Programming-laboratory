#include <stdio.h>
int main() {
int n,i,f=0;
scanf("%d",&n);
for(i=2;i<=n/2;i++){
if(n%i==0){
f++;
break;}}
if(f==0){
printf("%d is prime",n);}
else{
printf("non prime");
}
return 0;
}

    

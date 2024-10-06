#include<stdio.h>
int main(){
\\to check the student has cleared the exam or not
 int t,e,m,s,ss,tot;
 scanf("%d %d %d %d %d",&t,&e,&m,&s,&ss);
 tot=t+e+m+s+ss;
 float avg=tot*0.2;
printf("%d\n%.2f\n",tot,avg);
if(t,e,m,s,ss>=50)
{
    printf("Congratulations you cleared the exam");
}
else
{
    printf("Oops,kindly reappear");
}
return 0;
}

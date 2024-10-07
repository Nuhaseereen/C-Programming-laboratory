#include<stdio.h>
#include<math.h>
 int main()
 { float x1,x2,y1,y2,d,a,b;
scanf("%f%f%f%f",&x1,&x2,&y1,&y2); 
a=pow((x2-x1),2); 
b=pow((y2-y1),2); 
d=sqrt(a+b); 
printf("the distance between two points is %.2f",d);
 return 0; }

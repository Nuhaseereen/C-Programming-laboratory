#include <stdio.h>
#include <math.h>

int main() {
   float p,r,t,ci,a,n;
   scanf("%f",&n);
   scanf("%f",&p); 
   scanf("%f",&r); 
   r=r / 100; 
    scanf("%f",&t);
    a=p*pow((1+r/n),n*t);
    ci=a-p;
    printf("compound interest is : %.2f",ci);
    return 0;
} 

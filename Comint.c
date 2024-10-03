#include <stdio.h>
#include <math.h>

int main() {
    double p, r, t, ci, a;
    int n;
    printf("Enter principal amount: ");
    scanf("%lf", &p);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &r);
    r = r/ 100; 

    printf("Enter time (in years): ");
    scanf("%lf", &t);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    
    a = p * pow((1 + r / n), n * t);
   
    ci = a - p;

    printf("The compound interest is: %.2lf\n", ci);
    printf("The total amount after %.2lf years is: %.2lf\n", t, a);

    return 0;
}￼Enter

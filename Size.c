#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    double d;
    printf("Enter integer:");
    scanf("%d",&a);
    printf("Enter Float:");
    scanf("%f",&b);
    printf("Enter char:");
    scanf("%s",&c);
    printf("Enter Doulbe:");
    scanf("%lf",&d);
    printf("Size Of Int: %d\n",sizeof(a));
    printf("Size Of Float: %d\n",sizeof(b));
    printf("Size of Char: %d\n",sizeof(c));
    printf("Size of Double: %d\n",sizeof(d));

    return 0;
}￼Enter

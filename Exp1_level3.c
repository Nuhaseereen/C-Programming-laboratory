#include <stdio.h>
#include <math.h>
int main() {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float ac = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    printf("distance ab: %.2f\n", ab);
    printf("distance bc: %.2f\n", bc);
    printf("distance ac: %.2f\n", ac);
    return 0;
}

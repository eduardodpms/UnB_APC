#include <stdio.h>

int main() {
    double h;
    scanf("%lf", &h);
    printf("%.0lf\n%.0lf\n", h*60, h*3600);
    return 0;
}
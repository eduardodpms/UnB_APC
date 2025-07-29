#include <stdio.h>

int main() {
    int P, V, T, Y500, Y100, Y50, Y10, Y5;
    scanf("%d %d", &P, &V);
    T = V-P;
    Y500 = T/500;
    T = T-Y500*500;
    Y100 = T/100;
    T = T-Y100*100;
    Y50 = T/50;
    T = T-Y50*50;
    Y10 = T/10;
    T = T-Y10*10;
    Y5 = T/5;
    T = T-Y5*5;

    printf("%d\n", Y500);
    printf("%d\n", Y100);
    printf("%d\n", Y50);
    printf("%d\n", Y10);
    printf("%d\n", Y5);
    printf("%d\n", T);

    return 0;
}
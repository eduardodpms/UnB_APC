#include <stdio.h>

int main()
{
    int a, b, c, l=0;
    scanf("%d %d", &a, &b);
    while(l<a) {
        c=0;
        while(c<b) {
        printf("[%03d,%03d]", l, c);
        c++;
        }
        printf("\n");
        l++;
    }

    return 0;
}

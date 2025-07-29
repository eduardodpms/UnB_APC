#include <stdio.h>

int main()
{
    int n, a=1, b=1;
    scanf("%d", &n);
    
    while(a<=n) {
        b = 1;
        while(b<=a)
        {
            if (a<10)
            printf("0%d ", a);
            else
            printf("%d ", a);
            b++;
        }
        printf("\n");
        a++;
    }
    a = 1;
    printf("\n");
    while(a<=n) {
        b = 1;
        while(b<=a)
        {
            if (b<10)
            printf("0%d ", b);
            else
            printf("%d ", b);
            b++;
        }
        printf("\n");
        a++;
    }

    return 0;
}


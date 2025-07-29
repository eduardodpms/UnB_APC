#include <stdio.h>

int main()
{
    int m, a, b, c=0;
    scanf("%d", &b);
    while(c<b){
        scanf("%d", &a);
        if (c==0)
        m = a;
        else
        m = m + a;
        c++;
    }
    printf("%d\n", m);
    return 0;
}


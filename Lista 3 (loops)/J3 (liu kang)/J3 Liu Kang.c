#include <stdio.h>
#include <math.h>

int main()
{
    int G;
    unsigned long int T, a, b=0;
    scanf("%lu %d", &T, &G);
    while(G){
        a = sqrt(T);
        if(a%2)
        b = 2*a-1;
        else
        b = a-1;
        T = b*b;
        printf("%lu\n", T);
        G--;
    }
    return 0;
}


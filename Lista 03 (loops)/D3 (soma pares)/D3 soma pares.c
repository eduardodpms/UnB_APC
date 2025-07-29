#include <stdio.h>

int main()
{
    unsigned long int a=1, s=0;
    while (a!=0){
        scanf("%u", &a);
        if(a%2==0)
            s = s + a;
    }
    printf("%u\n", s);
    return 0;
}

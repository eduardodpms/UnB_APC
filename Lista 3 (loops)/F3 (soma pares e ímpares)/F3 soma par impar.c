#include <stdio.h>

int main()
{
    unsigned int a=1, sp=0, si=0;
    while (a!=0){
        scanf("%u", &a);
        if(a%2)
            si = si + a;
        else
            sp = sp + a;
    }
    printf("%u %u\n", sp, si);
    return 0;
}

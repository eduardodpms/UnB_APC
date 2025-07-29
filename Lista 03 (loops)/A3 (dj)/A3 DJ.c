#include <stdio.h>

int main()
{
    int a, b = 0;
    scanf("%d", &a);
    while(b<a) {
        b++;
        if(b%2)
        printf("THUMS THUMS THUMS\n");
        else
        printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
    }
    return 0;
}

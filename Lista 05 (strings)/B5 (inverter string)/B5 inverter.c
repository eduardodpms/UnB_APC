#include <stdio.h>

int main()
{
    char a[1000], b[1000];
    int i = 0;
    scanf("%s", a);
    for( ; a[i] != 0; i++){}
    for(int j = 0; i != -1; i--, j++){
        b[j] = a[i-1];
    }
    printf("%s", b);
    return 0;
}

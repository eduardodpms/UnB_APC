#include <stdio.h>

int main()
{
    char pal[101], paln[101];
    int t, j=0;
    scanf("%[^\n]s", pal);
    for(t=0; pal[t]; t++){}
    for(int i=t; i>-1; i--, j++){
        if(pal[i-1] > 'A' && pal[i-1] < 'Z')
            paln[j] = pal[i-1] + 32;
        else if(pal[i-1] > 'a' && pal[i-1] < 'z')
            paln[j] = pal[i-1] - 32;
        else
            paln[j] = pal[i-1];
    }
    paln[j] = 0;
    printf("%s\n", paln);
    return 0;
}

    
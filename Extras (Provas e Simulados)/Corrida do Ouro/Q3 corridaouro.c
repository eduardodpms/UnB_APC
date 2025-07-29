#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    char p, mapa[26][26]={};
    while(n){
        scanf(" %c %d", &p, &m);
        mapa[p-'A'][m] = 1;
        n--;
    }
    scanf("%d", &n);
    while(n){
        scanf(" %c %d", &p, &m);
        if(mapa[p-'A'][m])
            printf("ouro ");
        else
            printf("vazio ");
        printf("%c%d\n", p, m);
        n--;
    }
    return 0;
}


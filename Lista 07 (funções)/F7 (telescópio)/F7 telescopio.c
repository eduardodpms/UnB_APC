/*#include <stdio.h>*/

int contarEstrelas(int qtd, int abertura){
    int n=0, f;
    for(; qtd; qtd--){
        scanf("%d", &f);
        if(f*abertura >= 40000000)
            n++;
    }
    return n;
}

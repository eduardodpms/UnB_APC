#include <stdio.h>

int qtdElementosUnicos(int v[10000], int qtd){
    int n=1;
    for(int i=1; i<=qtd-1; i++){
        if(v[i]!=v[i-1])
            n++;
    }
    return n;
}
#include <stdio.h>

int encaixa(int a, int b){
    for(int v=1; b||v; a/=10, b/=10, v=0)
        if(a%10 != b%10)
            return 0;
    return 1;
}

int segmento(int a, int b){
    if(a>b){
        for(; a>=b && a; a/=10)
            if(encaixa(a, b))
                return 1;
        return 0;
    }
    else if(b>a){
        for(; b>=a && b; b/=10)
            if(encaixa(b, a))
                return 1;
        return 0;
    }
    else
        return 1;
}

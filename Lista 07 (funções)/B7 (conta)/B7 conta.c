#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int a, s, i=0;
    for(; i<parcelas; i++){
        scanf("%d", &a);
        if(!i)
            s=a;
        else if(op=='+')
            s+=a;
        else
            s-=a;
    }
    return s;
}

/*int main(){
    printf("%d", faz_conta_direito(4, '-'));
    return 0;
}*/
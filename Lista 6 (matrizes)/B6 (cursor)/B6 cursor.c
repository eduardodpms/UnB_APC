#include <stdio.h>

int main(){
    int n, h, pl, pc;;
    scanf("%d", &n);
    char texto[n][1001], c;
    int tamanhos[n];
    for(int i=0, j; i<n; i++) {
        scanf(" %[^\n]s", texto[i]);
        for(j=0; texto[i][j]; j++){}
        tamanhos[i] = j;
    }
    scanf("%d %d", &pl, &pc);
    pl--;
    while(scanf(" %c", &c)!=EOF){
        h = pc;
        if((c=='j')&&(pl<n-1))
            pl++;
        else if((c=='k')&&(pl>0))
            pl--;
        if(tamanhos[pl]<pc)
            h = tamanhos[pl];
        printf("%d %d %c\n", pl+1, h, texto[pl][h-1]);
    }
    return 0;
}
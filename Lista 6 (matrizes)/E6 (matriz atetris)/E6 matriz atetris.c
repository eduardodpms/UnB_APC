#include <stdio.h>

int main(){
    int n, v=0;
    scanf("%d", &n);
    int matriz[n+1][n];
    for(int l=0; l<=n; l++)
        for(int c=0; c<n&&l<n; c++)
            scanf("%d", &matriz[l][c]);
    for(int c=0; c<n; c++)
        matriz[n][c] = 1;
    while(!v){
        v = 1;
        for(int l=0; l<n; l++) {
            int s = 0;
            for(int c=0; c<n; c++)
                s += matriz[l][c];
            if(s==n)
                for(int c=0; c<n; c++)
                    matriz[l][c] = 0;
            for(int c=0; c<n; c++){
                printf("%d", matriz[l][c]);
                if(c<n-1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
        for(int c=0; c<n; c++)
            for(int l=n; l; l--)
                if(matriz[l-1][c])
                    for(int i=l; !matriz[i][c]; i++){
                        matriz[i][c] = 1;
                        matriz[i-1][c] = 0;
                    }
        for(int l=0; l<n; l++){
            for(int c=0; c<n; c++){
                printf("%d", matriz[l][c]);
                if (c<n-1)
                    printf(" ");
            }
            printf("\n");
        }
        for(int l=0; l<n&&v; l++){
            int s = 0;
            for(int c = 0; c<n; c++)
                s += matriz[l][c];
            if(s==n)
                v=0;
        }
        if(!v)
            printf("\n");
    }
    return 0;
}
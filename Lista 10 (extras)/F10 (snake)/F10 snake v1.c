#include <stdio.h>

typedef struct snake{
    int i;
    int j;
} cobra;

int main(){
    cobra corpo[100];
    char e;
    int tam = 0, v, l, m, c, d, mapa[10][10];

    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++){
            scanf("%d", &mapa[i][j]);
            if(mapa[i][j]){
                corpo[mapa[i][j]-1].i = i;
                corpo[mapa[i][j]-1].j = j;
                tam++;
            }
        }
    while(scanf(" %c", &e) != -1 && e!='p'){
        v = 0;
        l = corpo[tam-1].i;
        c = corpo[tam-1].j;
        if(e=='w'){
            l--;
            if(l < 0)
                printf("Bateu na parede\n");
            else if(mapa[l][c])
                printf("Bateu em si mesma\n");
            else
                v = 1;
        }
        else if(e=='s'){
            l++;
            if(l > 9)
                printf("Bateu na parede\n");
            else if(mapa[l][c])
                printf("Bateu em si mesma\n");
            else
                v = 1;
        }
        else if(e=='a'){
            c--;
            if(c < 0)
                printf("Bateu na parede\n");
            else if(mapa[l][c])
                printf("Bateu em si mesma\n");
            else
                v = 1;
        }
        else if(e=='d'){
            c++;
            if(c > 9)
                printf("Bateu na parede\n");
            else if(mapa[l][c])
                printf("Bateu em si mesma\n");
            else
                v = 1;
        }
        if(v){
            printf("Nao bateu\n");
            for(int a=tam-1; a>-1; a--){
                m = corpo[a].i;
                d = corpo[a].j;
                corpo[a].i = l;
                corpo[a].j = c;
                mapa[l][c] = mapa[m][d];
                mapa[m][d] = 0;
                l = m;
                c = d;
            }
            /*for(int i=0; i<10; i++){
                for (int j = 0; j < 10; j++)
                    printf("%02d ", mapa[i][j]);
                printf("\n");
            }*/
        }
        else
            return 0;
    }
    printf("Venceu\n");
    return 0;
}

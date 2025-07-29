#include <stdio.h>

struct cobra{
    int i;
    int j;
};
int main(){
    char a;
    struct cobra corpo[100];
    int t = 0, mapa[10][10];
    int e, l, m, c, d;
    for(int i=0; i<10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &mapa[i][j]);
            if (mapa[i][j]) {
                corpo[mapa[i][j] - 1].i = i;
                corpo[mapa[i][j] - 1].j = j;
                t++;
            }
        }
    }
    while(scanf(" %c", &a) != -1 && a!='p'){
        e = 0;
        c = corpo[t-1].j;
        l = corpo[t-1].i;
        if(a=='a'){
            c--;
            if(c < 0)
                printf("Bateu na parede\n");
            else if(mapa[l][c] > 0)
                printf("Bateu em si mesma\n");
            else
                e = 1;
        }
        else if(a=='d'){
            c++;
            if(c > 9)
                printf("Bateu na parede\n");
            else if(mapa[l][c] > 0)
                printf("Bateu em si mesma\n");
            else
                e = 1;
        }
        else if(a=='w'){
            l--;
            if(l < 0)
                printf("Bateu na parede\n");
            else if(mapa[l][c] > 0)
                printf("Bateu em si mesma\n");
            else
                e = 1;
        }
        else if(a=='s'){
            l++;
            if(l > 9)
                printf("Bateu na parede\n");
            else if(mapa[l][c] > 0)
                printf("Bateu em si mesma\n");
            else
                e = 1;
        }
        if(e == 1){
            printf("Nao bateu\n");
            for(int b=t-1; b>-1; b--){
                d = corpo[b].j;
                m = corpo[b].i;
                corpo[b].j = c;
                corpo[b].i = l;
                mapa[l][c] = mapa[m][d];
                mapa[m][d] = 0;
                c = d;
                l = m;
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

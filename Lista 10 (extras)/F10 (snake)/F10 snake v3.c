#include <stdio.h>

int main(){
    int mapa[10][10], l=0, c=0, la, ca;
    char e;
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++){
            scanf("%d", &mapa[i][j]);
            if(mapa[i][j]>=mapa[l][c])
                l = i, c = j;
        }
    while(scanf(" %c", &e) != -1){
        la = l, ca = c;
        if(e=='p'){
            printf("Venceu\n");
            return 0;
        }
        else if(e=='w')
            l--;
        else if(e=='s')
            l++;
        else if(e=='a')
            c--;
        else if(e=='d')
            c++;
        if(l<0 || l>9 || c<0 || c>9){
            printf("Bateu na parede\n");
            return 0;
        }
        else if(mapa[l][c]){
            printf("Bateu em si mesma\n");
            return 0;
        }
        else{
            printf("Nao bateu\n");
            mapa[l][c] = mapa[la][ca]+1;
            for(int i=0; i<10; i++)
                for(int j=0; j<10; j++)
                    if(mapa[i][j])
                        mapa[i][j] -= 1;
            /*for(int i=0; i<10; i++, printf("\n"))
                for(int j=0; j<10; printf("%02d ", mapa[i][j]), j++);*/
        }
    }
}
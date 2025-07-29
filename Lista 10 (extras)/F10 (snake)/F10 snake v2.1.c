#include <stdio.h>

struct parte{
    int linha;
    int coluna;
};

int main(){

    int tamanho = 0, linha, linhatemp, coluna, colunatemp, valido, tela[10][10];

    struct parte cobra[100];

    char entrada;

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++) {
            scanf("%d", &tela[i][j]);
            if( tela[i][j] != 0 ){
                tamanho = tamanho + 1;
                cobra[tela[i][j] - 1].coluna = j;
                cobra[tela[i][j] - 1].linha = i;
            }
        }
    }


    for(; scanf(" %c", &entrada) != -1 ;){

        valido = 0;

        coluna = cobra[tamanho-1].coluna;

        linha = cobra[tamanho-1].linha;

        if(entrada == 's'){
            linha = linha + 1;
            if( !(linha > 9 || tela[linha][coluna]) ){
                valido = 1;
            }
        }

        else if(entrada == 'w'){
            linha = linha - 1;
            if( !(linha < 0 || tela[linha][coluna]) ){
                valido = 1;
            }
        }

        else if(entrada == 'd'){
            coluna = coluna + 1;
            if( !(coluna > 9 || tela[linha][coluna]) ){
                valido = 1;
            }
        }

        else if(entrada == 'a'){
            coluna = coluna - 1;
            if( !(coluna < 0 || tela[linha][coluna]) ){
                valido = 1;
            }
        }

        if(valido == 1){
            printf("Nao bateu\n");
            for(int n = (tamanho-1); n>-1; n--){
                colunatemp = cobra[n].coluna;
                linhatemp = cobra[n].linha;
                cobra[n].coluna = coluna;
                cobra[n].linha = linha;
                tela[linha][coluna] = tela[linhatemp][colunatemp];
                tela[linhatemp][colunatemp] = 0;
                coluna = colunatemp;
                linha = linhatemp;
            }
        }
        else if(entrada != 'p'){
            if(coluna > 9 || linha > 9 || coluna < 0 || linha < 0){
                printf("Bateu na parede\n");
            }
            else{
                printf("Bateu em si mesma\n");
            }
            return 0;
        }
        else{
            printf("Venceu\n");
            return 0;
        }
    }
}

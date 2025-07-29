#include <stdio.h>

struct cobra{
    int x;
    int y;
};

char scan(char *p){
    scanf(" %c", p);
    return *p;
}

int main(){

    char caracter;
    struct cobra partes[100];
    int campo[10][10], tamanho = 0, coluna, coluna1, linha, linha1;

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &campo[i][j]);

            if (campo[i][j] != 0) {
                tamanho++;
                partes[campo[i][j] - 1].x = i;
                partes[campo[i][j] - 1].y = j;
            }
        }
    }

    while(scan(&caracter) != 'p'){
        coluna = partes[tamanho-1].y;
        linha = partes[tamanho-1].x;
        if(caracter == 'd'){
            coluna++;
            if(coluna > 9) {
                printf("Bateu na parede\n");
                return 0;
            }
            else if(campo[linha][coluna]) {
                printf("Bateu em si mesma\n");
                return 0;
            }
        }
        else if(caracter == 'w'){
            linha--;
            if(linha < 0) {
                printf("Bateu na parede\n");
                return 0;
            }
            else if(campo[linha][coluna]) {
                printf("Bateu em si mesma\n");
                return 0;
            }
        }
        else if(caracter == 'a'){
            coluna--;
            if(coluna < 0) {
                printf("Bateu na parede\n");
                return 0;
            }
            else if(campo[linha][coluna]) {
                printf("Bateu em si mesma\n");
                return 0;
            }
        }
        else if(caracter == 's'){
            linha++;
            if(linha > 9) {
                printf("Bateu na parede\n");
                return 0;
            }
            else if(campo[linha][coluna]) {
                printf("Bateu em si mesma\n");
                return 0;
            }
        }

        printf("Nao bateu\n");

        for(int contador = tamanho-1; contador > -1; contador--) {
            linha1 = partes[contador].x;
            coluna1 = partes[contador].y;
            partes[contador].x = linha;
            partes[contador].y = coluna;
            campo[linha][coluna] = campo[linha1][coluna1];
            campo[linha1][coluna1] = 0;
            linha = linha1;
            coluna = coluna1;
        }
    }

    printf("Venceu\n");

    return 0;
}

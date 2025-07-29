#include <stdio.h>
#include <string.h>

struct tipoBanda{
    char nome[80];
    int ano;
};

struct tipoShow{
    char nome[80];
    int qtd;
    struct tipoBanda bandas[100];
};

void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50], int n){
    int i, j, v, w=0;
    for(i=0; i<n; i++){
        v=0;
        for(j=0; j<shows[i].qtd && !v; j++){
            if(!strcmp(shows[i].bandas[j].nome, pesquisa)){
                printf("%s : ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                v = 1, w = 1;
            }
        }
    }
    if(!w)
        printf("Banda nao cadastrada\n");
}

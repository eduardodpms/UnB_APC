#include <stdio.h>
#include <string.h>

struct tipoMusica{
    char nome[80];
    int ano;
};

struct tipoBanda{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};

void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda bandas[50], int n){
    int i, j, v, w=0;
    for(i=0; i<n; i++){
        v=0;
        for(j=0; j<bandas[i].qtd && !v; j++){
            if(!strcmp(bandas[i].musicas[j].nome, pesquisa)){
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                v = 1, w = 1;
            }
        }
    }
    if(!w)
        printf("Musica nao cadastrada\n");
}
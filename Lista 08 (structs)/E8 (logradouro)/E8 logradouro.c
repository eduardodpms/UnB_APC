#include <stdio.h>

struct tipoLogradouro{
    char tipo[80];
    char nome[80];
    char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]){
    int i, j=0;
    for(i=0; info.tipo[i]; i++, j++){
           linha[j] = info.tipo[i];
    }
    linha[j] = ';';
    for(i=0; info.nome[i]; i++, j++){
           linha[j+1] = info.nome[i];
    }
    linha[j+1] = ';';
    for(i=0; info.complemento[i]; i++, j++){
           linha[j+2] = info.complemento[i];
    }
    linha[j+2] = 0;
}

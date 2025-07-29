#include <stdio.h>

struct tipoFiliacao{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[241]){
    struct tipoFiliacao a;
    int j, i;
    for(j=0; linha[j]!=','; j++){
        a.nome[j] = linha[j];
    }
    a.nome[j] = 0;
    for(i=0; linha[j+1]!=','; i++, j++){
        a.nomeMae[i] = linha[j+1];
    }
    a.nomeMae[i] = 0;
    for(i=0; linha[j+2]; i++, j++){
        a.nomePai[i] = linha[j+2];
    }
    a.nomePai[i] = 0;
    return a;
}

/*int main(){
    printf("%s", separaLinhaCSV("Alo, Tudo, Bem").nome);
    return 0;
}*/
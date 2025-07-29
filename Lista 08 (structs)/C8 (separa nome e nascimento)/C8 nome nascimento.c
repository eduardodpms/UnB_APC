#include <stdio.h>

struct tipoData{
    int dia;
    int mes;
    int ano;
};

struct tipoPessoa{
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nascimento){
    struct tipoPessoa a;
    int i=0;
    for(;nome[i]; i++)
        a.nome[i] = nome[i];
    a.nome[i] = 0;
    a.dtNascimento.ano = dt_nascimento/10000;
    a.dtNascimento.mes = dt_nascimento%10000/100;
    a.dtNascimento.dia = dt_nascimento%100;
    return a;
}

#include <stdio.h>

int main()
{
    int dia = 1, numero, codigo, nota;
    while (scanf("%d", &numero) != EOF) {
        int escolha=-1, notaescolha=-1, b=0;
        while (b<numero){
            scanf("%d %d", &codigo, &nota);
            if((nota>notaescolha) || ((nota == notaescolha) && (codigo < escolha))) {
            escolha = codigo;
            notaescolha = nota;
            }
            b++;
        }
        printf("Dia %d\n%d\n\n", dia, escolha);
        dia++;
    }
    return 0;
}


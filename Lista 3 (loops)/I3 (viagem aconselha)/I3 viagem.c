#include <stdio.h>

int main()
{
    int a = 0, dia = 1, numero, codigo, nota;
    while (a != -1) {
        int escolha=-1, notaescolha=-1, b=0;
        scanf("%d", &numero);
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


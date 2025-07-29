#include <stdio.h>

int main(){
    unsigned long long int cpf;
    int a, b, c, d, e, f, g, h, i, j, k, d1, d2;
    scanf("%llu", &cpf);
    i = cpf%100000000000/10000000000;
    h = cpf%10000000000/1000000000;
    g = cpf%1000000000/100000000;
    f = cpf%100000000/10000000;
    e = cpf%10000000/1000000;
    d = cpf%1000000/100000;
    c = cpf%100000/10000;
    b = cpf%10000/1000;
    a = cpf%1000/100;
    j = cpf%100/10;
    k = cpf%10;
    d1 = 11-(2*a+3*b+4*c+5*d+6*e+7*f+8*g+9*h+10*i)%11;
    if (d1 > 9)
    d1 = 0;
    d2 = 11-(2*d1+3*a+4*b+5*c+6*d+7*e+8*f+9*g+10*h+11*i)%11;
    if (d2 > 9)
    d2 = 0;
    if (d1==j && d2==k)
    printf("valido\n");
    else
    printf("invalido\n");
    return 0;
}
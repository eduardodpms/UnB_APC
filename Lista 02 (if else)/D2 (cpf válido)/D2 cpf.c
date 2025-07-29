#include <stdio.h>

int main(){
    unsigned long long int cpf;
    int a, b, c, d, e, f, g, h, i, j, k, d1, d2;
    scanf("%llu", &cpf);
    i = cpf/100000000;
    h = cpf/10000000-10*i;
    g = cpf/1000000-100*i-10*h;
    f = cpf/100000-1000*i-100*h-10*g;
    e = cpf/10000-10000*i-1000*h-100*g-10*f;
    d = cpf/1000-100000*i-10000*h-1000*g-100*f-10*e;
    c = cpf/100-1000000*i-100000*h-10000*g-1000*f-100*e-10*d;
    b = cpf/10-10000000*i-1000000*h-100000*g-10000*f-1000*e-100*d-10*c;
    a = cpf-100000000*i-10000000*h-1000000*g-100000*f-10000*e-1000*d-100*c-10*b;
    k = cpf%10;
    j = cpf%100/10;
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
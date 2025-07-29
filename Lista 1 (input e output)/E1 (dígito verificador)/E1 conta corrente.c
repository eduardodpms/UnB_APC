#include <stdio.h>

int main(){
    int n, v, a, b, c, d, e, f;
    scanf("%d", &n);
    a = n/100000;
    b = n/10000-a*10;
    c = n/1000-(a*100+b*10);
    d = n/100-(a*1000+b*100+c*10);
    e = n/10-(a*10000+b*1000+c*100+d*10);
    f = n-(a*100000+b*10000+c*1000+d*100+e*10);
    v = 11-((2*f+3*e+4*d+5*c+6*b+7*a)%11);
    printf("%d", v);
    return 0;
}
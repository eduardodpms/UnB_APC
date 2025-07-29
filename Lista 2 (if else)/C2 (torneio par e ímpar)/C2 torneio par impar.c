#include <stdio.h>

int main(){
    int p, s, t, A, B, C, D, E, F;
    char v1, v2, v3;
    scanf("%d %d %d", &p, &A, &B);
    scanf("%d %d %d", &s, &C, &D);
    scanf("%d %d %d", &t, &E, &F);
    if (p==(A+B)%2)
     v1='A';
    else
     v1='B';
    if (s==(C+D)%2)
     v2='C';
    else
     v2='D';
    if (t==(E+F)%2)
     v3=v1;
    else
     v3=v2;
    printf("%c\n", v3);
    return 0;
}
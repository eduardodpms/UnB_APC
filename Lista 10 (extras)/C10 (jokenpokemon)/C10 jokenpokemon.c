#include <stdio.h>

int main(){
    int m, n;
    char v = 'A';
    scanf("%d%d", &m, &n);
    if(m==n){
        printf("empate");
        return 0;
    }
    else if((m==0 && n!=5) || (m==1 && n!=0 && n!=4) || (m==2 && n==5) || (m==3 && n==2) || (m==4 && n!=0 && n!=5) || (m==5 && n!=1 && n!=2))
        v = 'B';
    printf("%c\n", v);
    return 0;
}
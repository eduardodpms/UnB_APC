#include <stdio.h>

int main(){
    int n=1, l=1;
    float m = 0;
    char a, texto[1001];
    scanf("%c", &a);
    scanf(" %[^\n]s", texto);
    for(int i=0; texto[i]; i++){
        if(texto[i]==' '){
            n++;
            l = 1;
        }
        else if((texto[i]==a) && l){
            m++;
            l = 0;
        }
    }
    printf("%.1f", 100*m/n);
    return 0;
}

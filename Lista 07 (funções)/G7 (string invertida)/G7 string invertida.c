#include <stdio.h>

int main(){
    int i=0;
    char a[102];
    fgets(a, 102, stdin);
    for(; a[i+1]; i++){}
    for(; i; i--){
        printf("%c - %d\n", a[i-1], a[i-1]);
    }
    return 0;
}
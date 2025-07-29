#include <stdio.h>

int main() {
    char a[61]="", b[61]={};
    int j=0, v=1, i;
    scanf("%s", a);
    for(i=0; a[i]; i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            b[j] = a[i];
            j++;
        }
    }
    for(i=0; i<j&&v; i++, j--){
        if(b[i]!=b[j-1])
            v = 0;
    }
    if(!j&&!i)
        printf("Valor invalido!");
    else if(v)
        printf("S");
    else
        printf("N");
    return 0;
}
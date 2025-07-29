#include <stdio.h>

int main() {
    char a[101]={};
    int j=0;
    while(scanf("%s", a) != EOF){
        for(int i=0; a[i]; i++){
            if(a[i]=='o'){j++;}
            a[i] = 0;
        }
    }
    printf("%d\n", j);
    return 0;
}
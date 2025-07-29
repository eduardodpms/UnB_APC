#include <stdio.h>

int main(){
    int a, B, T;
    scanf("%d %d", &B, &T);
    a = (B+T)*35;
    if(a==5600)
    printf("0");
    else
        switch(a>5600){
            case 0:
                printf("2");
                break;
            case 1:
                printf("1");
                break;
        }
    return 0;
}
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i=2; i<=a; i++){
        for(int j=2; !(a%i)&&(j<=b); j++){
            if(!(b%j)&&(i==j)){
                printf("0\n");
                return 0;
            }
        }
    }
    printf("1\n");
    return 0;
}

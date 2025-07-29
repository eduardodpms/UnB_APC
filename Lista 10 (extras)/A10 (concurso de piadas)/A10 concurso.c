#include <stdio.h>

void scan(int *a){
    int b;
    scanf("%d", &b);
    *a += b;
}

int main(){
    int n, a=0, b=0, c=0;
    scanf("%d", &n);
    while(n){
        scan(&a);
        scan(&b);
        scan(&c);
        n--;
    }
    if(a>b && a>c)
        printf("A\n");
    else if(a==b && a>c)
        printf("A e B\n");
    else if(a==c && a>b)
        printf("A e C\n");
    else if(a==b && a==c)
        printf("A, B e C\n");
    else if(b>c)
        printf("B\n");
    else if(b==c)
        printf("B e C\n");
    else
        printf("C\n");
    return 0;
}

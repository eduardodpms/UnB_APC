#include <stdio.h>

int main() {
    int n, i, j=0;
    scanf("%d", &n);
    while(n){
        char a[100];
        scanf("%s", a);
        for(i=0; a[i]; i++){}
        if(i>j)
            j = i;
        n--;
    }
    printf("%d", j);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, m, c, p=0, o=0;
    scanf("%d", &n);
    int a[n], b[n];
    while(n) {
        scanf("%d", &c);
        if (c % 2){
            b[p] = c;
            p++;
        }
        else {
            a[o] = c;
            o++;
        }
        n--;
    }
    m = 0;
    while(m<o){
        printf("%d ", a[m]);
        m++;
    }
    printf("\n");
    m = 0;
    while(m<p){
        printf("%d ", b[m]);
        m++;
    }
    return 0;
}


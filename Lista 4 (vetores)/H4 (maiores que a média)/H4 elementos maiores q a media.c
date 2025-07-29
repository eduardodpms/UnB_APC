#include <stdio.h>

int main() {
    int n, m = 0, media = 0, o = 0;
    scanf("%d", &n);
    int v[n], u[n];
    while(m<n) {
        scanf("%d", &v[m]);
        media += v[m];
        m++;
    }
    media = media/n;
    m = 0;
    while(m<n){
        if(v[m]>media) {
            u[o] = v[m];
            o++;
        }
        m++;
    }
    m = 0;
    while(m<o){
            printf("%d ", u[m]);
        m++;
    }
    if(o==0)
        printf("0");
    printf("\n");
    return 0;
}


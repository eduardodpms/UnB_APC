#include <stdio.h>

int main()
{
    int n, m, r=0, s=0;
    scanf("%d", &n);
    int v[n], p[n], i[n];
    while(m<n) {
        scanf("%d", &v[m]);
        if (v[m] % 2){
            i[s] = m;
            s++;
        }
        else {
            p[r] = m;
            r++;
        }
        m++;
    }
    m = 0;
    while(m<r){
        printf("%d ", p[m]);
        m++;
    }
    printf("\n");
    m = 0;
    while(m<s){
        printf("%d ", i[m]);
        m++;
    }
    return 0;
}
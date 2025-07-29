#include <stdio.h>

int main()
{
    int n, m=0;
    scanf("%d", &n);
    int u[n], v[n];
    while(m<n) {
        scanf("%d", &u[m]);
        m++;
    }
    m = 0;
    while(m<n) {
        scanf("%d", &v[m]);
        m++;
    }
    m = 0;
    while(m<n) {
        printf("%d ", u[m]+v[m]);
        m++;
    }
    return 0;
}


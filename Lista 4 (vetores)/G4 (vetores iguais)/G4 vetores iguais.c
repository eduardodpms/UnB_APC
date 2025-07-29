#include <stdio.h>

int main()
{
    int n, m=0, a;
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
        a = u[m]-v[m];
        if(a)
            m = n;
        m++;
    }
    if(a)
        printf("nao");
    else
        printf("sim");
    return 0;
}


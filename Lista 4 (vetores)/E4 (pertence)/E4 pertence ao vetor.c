#include <stdio.h>

int main()
{
    int n, m=0, a, b = 0;
    scanf("%d", &n);
    int v[n], p[n], i[n];
    while(m<n) {
        scanf("%d", &v[m]);
        m++;
    }
    scanf("%d", &a);
    m = 0;
    while(m<n) {
        if(a==v[m])
            b = 1;
        m++;
    }
    if(b)
        printf("pertence");
    else
        printf("nao pertence");
    return 0;
}


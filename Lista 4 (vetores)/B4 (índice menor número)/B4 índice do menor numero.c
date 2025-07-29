#include <stdio.h>

int main()
{
    int n, m=0, b, c=0;
    scanf("%d", &n);
    int a[n];
    while(m<n){
        scanf("%d", &a[m]);
        if((m == 0) || (a[m]<=c)) {
            b = m;
            c = a[m];
        }
        m++;
    }
    printf("%d\n", b);
    return 0;
}


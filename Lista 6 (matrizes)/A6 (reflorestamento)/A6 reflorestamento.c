#include <stdio.h>

int main() {
    int m = 0, n, a;
    scanf("%d", &n);
    int c[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!i)
                c[j] = 0;
            scanf("%d", &a);
            c[j] += a;
            if(c[j]>c[m] || (c[j]==c[m] && j<m))
                m = j;
        }
    }
    if(!c[m])
        m=-1;
    printf("%d\n", m+1);
    return 0;
}
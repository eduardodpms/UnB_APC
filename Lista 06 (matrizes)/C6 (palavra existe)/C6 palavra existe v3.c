#include <stdio.h>

int main(){
    int n, m, igual = 0;
    scanf("%d %d", &n, &m);
    char s[n][82], p[m][82];
    for(int i=0; i<n; i++)
        scanf("%s", s[i]);
    for(int i=0; i<m; i++){
        scanf("%s", p[i]);
        for(int j=0; j<n&&!igual; j++)
            for (int k=0; (p[i][k]==s[j][k])&&!igual; k++)
                if (!p[i][k])
                    igual = 1;
    }
    printf("%d\n", igual);
    return 0;
}
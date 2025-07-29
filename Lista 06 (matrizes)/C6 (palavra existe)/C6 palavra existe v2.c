#include <stdio.h>

int main(){
    int n, m, j, v, igual=1;
    scanf("%d %d", &n, &m);
    char s[n][82], p[m][82];
    fgets(s[0], 2, stdin);
    for(int i=0; i<n; i++)
        fgets(s[i], 82, stdin);
    for(int i=0; i<m; i++){
        fgets(p[i], 82, stdin);
        for(j=0, v=0; j<n&&igual&&!v; j++)
            for (int k=0; (p[i][k]==s[j][k])&&!v; k++)
                if (p[i][k] == '\n')
                    v = 1;
        if(!v)
            igual = 0;
    }
    printf("%d\n", igual);
    return 0;
}
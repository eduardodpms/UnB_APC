#include <stdio.h>

int main(){
    int n, m, igual = 0;
    scanf("%d %d", &n, &m);
    char s[n][82], p[m][82];
    fgets(s[0], 2, stdin);
    for(int i=0; i<n; i++)
        fgets(s[i], 82, stdin);
    for(int i=0; i<m; i++){
        fgets(p[i], 82, stdin);
        for(int j=0; j<n&&!igual; j++)
            for (int k=0; (p[i][k]==s[j][k])&&!igual; k++)
                if (p[i][k] == '\n')
                    igual = 1;
    }
    printf("%d\n", igual);
    return 0;
}
#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    int m[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &m[i][j]);
        }
    }
    for(int j=0; j<n; j++){
        int s=0;
        for(int i=0; i<n; i++){
            if(!m[i][j])
                s++;
            if(s==t){
                printf("%d\n", j);
                return 0;
            }
            if(m[i][j])
                s=0;
        }
    }
    printf("N\n");
    return 0;
}

    
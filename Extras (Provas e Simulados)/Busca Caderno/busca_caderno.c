#include <stdio.h>

int main()
{
    int t1, t2, n;
    scanf("%d%d%d", &t1, &t2, &n);
    char c1[t1][101], c2[t2][101];
    for(int i=0; i<t1; i++){
        scanf(" %[^\n]s", c1[i]);
    }
    for(int i=0; i<t2; i++){
        scanf(" %[^\n]s", c2[i]);
    }
    for(int i=0; i<n; i++){
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if(a==1)
            for(; c1[b-1][c];c++){
                printf("%c", c1[b-1][c]);
            }
        else if(a==2)
            for(; c2[b-1][c];c++){
                printf("%c", c2[b-1][c]);
            }
        printf("\n");
    }
    return 0;
}

    
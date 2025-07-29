#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d", &n);
    int v1[n], v2[n], v3[n];
    for(int i=0; i<n; i++){
        scanf("%d", &v1[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &v2[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        if(t == 0){
            printf("%d", v1[i] + v2[i]);
        }
        else if(t == 1){
            printf("%d", v1[i] - v2[i]);
        }
        else if(t == 2){
            printf("%d", v1[i] * v2[i]);
        }
        else if(t == 3){
            printf("%d", v1[i] / v2[i]);
        }
        if(i<n-1)
            printf(" ");
    }
    return 0;
}

    
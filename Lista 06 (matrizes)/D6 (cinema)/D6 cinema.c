#include <stdio.h>

int main(){
    int f, l;
    scanf("%d %d", &f, &l);
    char sala[f][l], p[4];
    for(int i=0; i<f; i++)
        for(int j=0; j<l; j++)
            sala[i][j] = '-';
    while(scanf("%s", p) != EOF) {
        if(!p[2])
            sala[p[0]-65][p[1]-49] = 'X';
        else
            sala[p[0]-65][(p[1]-48)*10+(p[2]-49)] = 'X';
    }
    printf(" ");
    for(int j=1; j<=l; j++)
        printf(" %02d", j);
    printf("\n");
    for(; f; f--){
        printf("%c", f+64);
        for(int j=0; j<l; j++)
            printf(" %c%c", sala[f-1][j], sala[f-1][j]);
        printf("\n");
    }
    return 0;
}
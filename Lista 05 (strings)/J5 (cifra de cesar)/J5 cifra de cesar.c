#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        char m[1002];
        fgets(m, 1002, stdin);
        for(int i=0, s; m[i]; i++){
            if(65<=m[i]&&m[i]<=90){
                s = m[i]+13;
                if(s>90){
                    m[i] = m[i] - 13;
                }
                else
                    m[i] = s;
            }
        }
        if(i)
        printf("%s", m);
    }
    return 0;
}
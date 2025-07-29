#include <stdio.h>

int main() {
    int n, h, m=0;
    scanf("%d", &n);
    while(n){
        char p[43]="";
        scanf("%s", p);
        for(int i=0, v=1; p[i]&&v; i++){
            if(p[i]<91)
                h = p[i]+32;
            else
                h = p[i];
            if(h>m||!i)
                m = h;
            else {
                printf("%s: N\n", p);
                v = 0;
            }
            if(!p[i+1]&&v){
                printf("%s: O\n", p);
            }
        }
        n--;
    }
    return 0;
}
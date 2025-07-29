#include <stdio.h>

int main(){
    char a[4];
    int n=0, m=0, l=0;
    while(scanf("%s", a) != -1){
        m++;
        if(!strcmp(a, "sim"))
            n++;
        if(m == 10){
            if(n>=2)
                l++;
            m = 0;
            n = 0;
        }
    }
    printf("%d\n", l);
    return 0;
}

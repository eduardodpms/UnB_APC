#include <stdio.h>

int main()
{
    int n, m=0, b, c, d;
    scanf("%d", &n);
    int a[n];
    while(m<n){
        scanf("%d", &a[m]);
        if(m==0) {
            b = a[m];
            c = a[m];
            d = a[m];
        }
        else{
            if(a[m]<=b){
                d = c;
                c = b;
                b = a[m];
            }
            else if(a[m]<=c){
                d = c;
                c = a[m];
            }
            else if(a[m]<=d) {
                d = a[m];
            }
        }
        m++;
    }
    printf("%d\n%d\n", c, d);
    return 0;
}


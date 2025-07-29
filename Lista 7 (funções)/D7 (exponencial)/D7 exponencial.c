/*#include <stdio.h>*/

double exp_natural(int x, int n){
    double a=1, b=1, x1=1;
    for(int i=0; i<n; i++){
        b *= i+1;
        x1 *= x;
        a += x1/b;
    }
    return a;
}

/*int main(){
    printf("%lf\n", exp_natural(2,15));
    return 0;
}*/
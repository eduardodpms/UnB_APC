#include <stdio.h>
#include <math.h>

int main()
{
    int n, numero;
    scanf("%d", &n);
    while(n) {
        scanf("%d", &numero);
        int m = 0, a = -1;
        char c = 'S';
        while(a) {
            int b = 2;
            a = numero/pow(10, m);
            while(b <= a / 2 || a==1) {
                if (a%b && a!=1)
                    b++;
                else {
                    a = 0;
                    c = 'N';
                }
            }
            m++;
        }
        printf("%c\n", c);
        n--;
    }
    return 0;
}
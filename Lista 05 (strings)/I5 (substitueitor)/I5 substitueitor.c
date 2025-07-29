#include <stdio.h>

int main() {
    int tf, tnp;
    char f[500000], ap[42], np[42];
    fgets(f, 500000, stdin);
    fgets(ap, 42, stdin);
    fgets(np, 42, stdin);
    for(tf=0; f[tf]; tf++){}
    for(tnp=0; np[tnp]!='\n'; tnp++){}
    for(int i=0, tap, v, u; f[i]!='\n'; i++){
        v = 0;
        if(f[i]==ap[0]) {
            v=1, u=1;
            for(tap=0; v&&u; tap++) {
                if(f[i + tap] != ap[tap])
                    v = 0;
                else if( (ap[tap+1]=='\n') && (f[i+tap+1]<65 || (90<f[i+tap+1] && f[i+tap+1]<97) || 122<f[i+tap+1]) )
                    u = 0;
            }
        }
        if(v){
            if(tap==tnp)
                for(int k=0; np[k]!='\n'; k++, i++)
                    f[i] = np[k];
            else if(tap<tnp) {
                for(int k = tf; k != i + tap; k--, tf++)
                    f[k - 1 + (tnp - tap)] = f[k - 1];
                for(int k = 0; np[k]!='\n'; k++, i++)
                    f[i] = np[k];
            }
            else if(tap>tnp){
                for(int k = 0; np[k]!='\n'; k++, i++)
                    f[i] = np[k];
                for(int k = i; f[k]; k++)
                    f[k] = f[k+(tap - tnp)];
            }
        }
    }
    printf("%s", f);
    return 0;
}
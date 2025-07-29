#include <stdio.h>

int validaPeso(double pesoKg){
    if(pesoKg>=0)
        return 1;
    else
        return 0;
}
void fazTonelada(double pesoKg){
    printf("%.4lf\n", pesoKg/1000);
}
void fazGrama(double pesoKg){
    printf("%.4lf\n", pesoKg*1000);
}

/*int main(){
    double a = 71.5;
    fazTonelada(a);
    fazGrama(a);
    printf("%d\n", validaPeso(a));
    return 0;
}*/
#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    double v = 3600*distancia/(tB-tA);
    return v;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    if( 3600*distancia/(tB-tA) > velocidadeMaxima)
        return 1;
    else
        return 0;
}

/*int main(){
    printf("%lf\n", levouMulta(54169,57346,170.0,120.0));
    return 0;
}*/
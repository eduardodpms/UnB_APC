#include <stdio.h>
#include <math.h>

struct tipoPonto {
    int x;
    int y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb){
    return sqrt(pow((pb.x-pa.x), 2) + pow((pb.y-pa.y), 2));
}

/*int main(){
    struct tipoPonto pa = {1, 2}, pb = {5, 5};
    printf("%lf\n", distancia(pa, pb));
    return 0;
}*/

#include <stdio.h>

void swap(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
}

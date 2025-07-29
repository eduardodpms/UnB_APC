#include <stdio.h>

int main() {
    int i=0, n;
    for(; scanf("%d", &n) != EOF; i++){}
    printf("%d", i);
    return 0;
}
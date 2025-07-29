#include <stdio.h>

int main(){
    int a, b;
    char v;
    scanf("%d %d", &a, &b);
    if(a==b)
    printf("empate");
    else {
    switch(a) {
        case 0:
          switch(b) {
            case 1:
                v = 'B';
                break;
            case 2:
                v = 'A';
                break;
            case 3:
                v = 'A';
                break;
            case 4:
                v = 'B';
                break;
          }
          break; 
        case 1:
          switch(b) {
            case 0:
                v = 'A';
                break;
            case 2:
                v = 'B';
                break;
            case 3:
                v = 'B';
                break;
            case 4:
                v = 'A';
                break;
          }
          break;
        case 2:
          switch(b) {
            case 0:
                v = 'B';
                break;
            case 1:
                v = 'A';
                break;
            case 3:
                v = 'A';
                break;
            case 4:
                v = 'B';
                break;
          }
          break;
        case 3:
          switch(b) {
            case 0:
                v = 'B';
                break;
            case 1:
                v = 'A';
                break;
            case 2:
                v = 'B';
                break;
            case 4:
                v = 'A';
                break;
          }
          break;
        case 4:
          switch(b) {
            case 0:
                v = 'A';
                break;
            case 1:
                v = 'B';
                break;
            case 2:
                v = 'A';
                break;
            case 3:
                v = 'B';
                break;
          }
          break;
    }
    printf("%c\n", v);
    }
    return 0;
}
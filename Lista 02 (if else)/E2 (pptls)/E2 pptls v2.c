#include <stdio.h>

int main(){
    int a, b;
    char v;
    scanf("%d %d", &a, &b);
    if(a==b)
    printf("empate");
    else {
    if (a==0) {
          if (b==1)
            v = 'B';
          else if (b==2)
            v = 'A';
          else if (b==3)
            v = 'A';
          else if (b==4)
            v = 'B';
        }
    else if (a==1) {
          if (b==0)
            v = 'A';
          else if (b==2)
            v = 'B';
          else if (b==3)
            v = 'B';
          else if (b==4)
            v = 'A';
        }
    else if (a==2) {
          if (b==0)
            v = 'B';
          else if (b==1)
            v = 'A';
          else if (b==3)
            v = 'A';
          else if (b==4)
            v = 'B';
        }
    else if(a==3) {
          if (b==0)
            v = 'B';
          else if (b==1)
            v = 'A';
          else if (b==2)
            v = 'B';
          else if (b==4)
            v = 'A';
        }
    else if(a==4) {
          if (b==0)
            v = 'A';
          else if (b==1)
            v = 'B';
          else if (b==2)
            v = 'A';
          else if (b==3)
            v = 'B';
        }
    printf("%c\n", v);
    }
    return 0;
}
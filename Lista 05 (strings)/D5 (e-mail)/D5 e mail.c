#include <stdio.h>

int main() {
    int n, t, b=1;
    char nome[110] = {}, email[110] = {};
    scanf("%[^\n]s", nome);

    for (n = 0; nome[n] != ' ' && b; n++) {
        if (nome[n] == 0) {
            b = 0;
            t = n;
        }
        else if (nome[n] < 91)
            email[n] = nome[n] + 32;
        else
            email[n] = nome[n];
    }
    if(b) {
        email[n] = '.';
        t = n + 1;
        for (n = 0; nome[n]; n++) {}
        for (; nome[n - 1] != ' '; n--) {}
        for (; nome[n]; t++, n++) {
            if (nome[n] < 91)
                email[t] = nome[n] + 32;
            else
                email[t] = nome[n];
        }
    }
    email[t] = '@';
    email[t + 1] = 'u';
    email[t + 2] = 'n';
    email[t + 3] = 'b';
    email[t + 4] = '.';
    email[t + 5] = 'b';
    email[t + 6] = 'r';
    printf("%s", email);
    return 0;
}
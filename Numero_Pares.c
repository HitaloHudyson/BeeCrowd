#include <stdio.h>
int main () {
    int contador = 0, i;
    for (i = 0; i <= 49; i++) {
        contador = contador + 2;
        printf ("%d\n", contador);
    }
    return 0;
}
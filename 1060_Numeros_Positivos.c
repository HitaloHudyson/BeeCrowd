#include <stdio.h>
int main() {
    float n1, n2, n3, n4, n5, n6;
    int contador = 0;
    scanf ("%f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6);
    if (n1 > 0) {
        contador = contador + 1;
    } if (n2 > 0) {
        contador = contador + 1;
    }if (n3 > 0) {
        contador = contador + 1;
    }if (n4 > 0) {
        contador = contador + 1;
    }if (n5 > 0) {
        contador = contador + 1;
    }if (n6 > 0) {
        contador = contador + 1;
    }
    printf ("%d valores positivos\n", contador);
    return 0;
}
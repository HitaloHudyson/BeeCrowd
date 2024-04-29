#include <stdio.h>

int main() {
    
    int N, numero = 1;
    scanf ("%d", &N);

    if (N > 1 && N < 1000) {
        for (numero = 1; numero <= N; numero++) {
             printf ("%d %d %d\n", numero, numero*numero, numero*numero*numero);
        }
    }
    return 0;
}
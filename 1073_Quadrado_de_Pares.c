#include <stdio.h>

int main() {
    
    int i;
    long N, C = 2;
    scanf ("%ld", &N);
    
    //cria a condição//
    
    if (N > 0 && N < 2000) {
        
    //cria um loop que soma +2 para apresentar somente pares//
        
        for (i = 2; i <= N; i += 2) {
            printf ("%ld^2 = %ld\n", C, C*C);
            C += 2;
            
    //C é a variavel que vai de 2 até N em números pares//
            
        }
    }
    return 0;
}
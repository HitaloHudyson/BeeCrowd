#include <stdio.h>

int main(){
    int tipo, alcool = 0, gasolina = 0, diesel = 0, fim;

    for ( ; ; ) {
        scanf ("%d", &tipo);
        
        if (tipo == 1) {
            alcool += 1;

        } else if (tipo == 2) {
            gasolina += 1;

        } else if (tipo == 3) {
            diesel += 1;

        } else if (tipo == 4) {
            break;

        }
    }
    printf ("MUITO OBRIGADO\n");
    printf ("Alcool: %d\n", alcool);
    printf ("Gasolina: %d\n", gasolina);
    printf ("Diesel: %d\n", diesel);

    return 0;
}
#include <stdio.h>

int main() {
    
    int num1, num2, num3, num4, num5;
    int par = 0, impar = 0, positivo = 0, negativo = 0;
    scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    if (num1 != 0) {
        num1 > 0 ? positivo++ : negativo++;
        num1 % 2 == 0 ? par++ : impar++;
    } else {
        par++;
    }

    if (num2 != 0) {
        num2 > 0 ? positivo++ : negativo++;
        num2 % 2 == 0 ? par++ : impar++;
    } else {
        par++;
    }

    if (num3 != 0) { 
        num3 > 0 ? positivo++ : negativo++;
        num3 % 2 == 0 ? par++ : impar++;
    } else {
        par++;
    }

    if (num4 != 0) {
        num4 > 0 ? positivo++ : negativo++;
        num4 % 2 == 0 ? par++ : impar++;
    } else {
        par++;
    }

    if (num5 != 0) {
        num5 > 0 ? positivo++ : negativo++;
        num5 % 2 == 0 ? par++ : impar++;
    } else {
        par++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
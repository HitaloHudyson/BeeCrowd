#include <stdio.h>

int main() {
    int num1, num2, num3, aux;
    int n1, n2, n3;
    scanf ("%d %d %d", &num1, &num2, &num3);
    
    n1 = num1;
    n2 = num2;
    n3 = num3;
    
    if (num1 > num2) {
        
        aux = num1;
        num1 = num2;
        num2 = aux;
        
    } if (num1 > num3) {
        
        aux = num1;
        num1 = num3;
        num3 = aux;
        
    } if (num2 > num3) {
        
        aux = num2;
        num2 = num3;
        num3 = aux;
        
    }
    printf ("%d\n%d\n%d\n\n", num1, num2, num3);
    printf ("%d\n%d\n%d\n", n1, n2, n3);
    
    return 0;
}
#include <stdio.h>
int main() 
{
    int x, i;

//x = numero final//
//i = numeros impares até x//
    
    scanf("%d", &x);
    if (x >= 0 && x <= 1000)
    {

//cria um loop para encontrar todos impares até x//
        
        for (i = 1; i <= x; i += 2) 
        {
            printf ("%d\n", i);
        }
        
    }
    return 0;
}
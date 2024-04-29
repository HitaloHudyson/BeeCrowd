#include <stdio.h>
int main(){
    int x, i;

    //x = numero lido//
    //i = seis numeros impares apos x//

    scanf ("%d", &x);
    x % 2 == 0? x += 1 : x;
    for (i = x; i <= x + 10; i += 2) {
    printf ("%d\n", i);
    }
    return 0;
}
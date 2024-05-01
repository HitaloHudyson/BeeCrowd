#include <stdio.h>
int main() {
    
    long int N, num1 = 1, num2 = 1, num3 = 1;
    scanf ("%ld", &N);
    if (N > 1 && N < 1000) 
    {
        while (num1 <= N) 
        {
            num3 = num2 = num1;
            num3 = num1 * num1 * num1;
            num2 = num1 * num1;
            printf ("%ld %ld %ld\n", num1, num2, num3);
            printf ("%ld %ld %ld\n", num1, num2+1, num3+1);
            num1++;
        }
    }
    return 0;
}
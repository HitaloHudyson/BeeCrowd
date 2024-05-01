#include <stdio.h>
int main()
{
    
    int N, tabuada = 1;
    scanf ("%d", &N);

    if (N > 2 && N < 1000) 
    {
        for (tabuada = 1; tabuada <= 10; tabuada++) 
        {
            printf ("%d x %d = %d\n", tabuada, N, tabuada * N);
        }
    }

    return 0;
}
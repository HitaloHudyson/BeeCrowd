#include <stdio.h>

int main() 
{
    int M, N, resto;
    scanf ("%d %d", &M, &N);
    if (M > N) 
    {
        for (resto = N+1; resto < M; resto++)
        {
            (resto % 5 == 2 || resto % 5 == 3) ? printf ("%d\n", resto) : 0;
        }
        
    } else if (N > M) 
    {
        for (resto = M+1; resto < N; resto++)
        {
            (resto % 5 == 2 || resto % 5 == 3) ? printf ("%d\n", resto) : 0;
        }
    }
    return 0;
}

// utilizzo ciclo for per i primi 20 numeri

#include <stdio.h>

int main()
{
    for (int count = 1; count <= 20; ++count)
    {
        if (count % 5 == 0)
        {
            printf("%d\n", count);
        }
        else
        {
            printf("%d\t", count);
        }
    }
    return 0;
}
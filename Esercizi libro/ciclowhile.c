
// ciclo while per i primi 20 numeri

#include <stdio.h>

int main()
{
    int count = 1;
    while (count <= 20)
    {
        printf("%d", count);

        if (count % 5 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("%s", "\t");
        }
        count++;
    }
}

#include <stdio.h>
#define MAX 11
int main()
{
    int vet[MAX] = {0};
    for (int i = 0; i < 11; i++)
    {
        printf("Inserisci un valore: ");  
        scanf("%d", &vet[i]);
    }
    for (int contr = 1; contr < MAX; ++contr)
    {
        for (int a = 0; a < MAX - 1; ++a)
        {
            if (vet[a] > vet[a + 1])  
            {
                int hold = vet[a];
                vet[a] = vet[a + 1];
                vet[a + 1] = hold;
            }
        }
    }
    for (int k = 0; k < MAX; k++)
    {
        printf("%d\t", vet[k]);
    }
return 0;
}

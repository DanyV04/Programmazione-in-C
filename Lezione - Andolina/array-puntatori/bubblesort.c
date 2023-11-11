#include <stdio.h>
#define DIM 20

int main(){
    int vet[DIM];
    printf("Inserisci un numero: ");
    for (int i = 0; i < DIM; ++i)
    {
        scanf("%d", &vet[i]);
    }
    printf("La sequenza inserita e': ");
    for (int j = 0; j < DIM; ++j)
    {
        printf("%4d", vet[j]);
    }
    for (int contr = 1; contr < DIM; ++contr)
    {
        for (int a = 0; a < DIM - 1; ++a)
        {
            if (vet[a] > vet[a + 1])
            {
                int hold = vet[a];
                vet[a] = vet[a + 1];
                vet[a + 1] = hold;
            }
            
        }
        
    }
    printf("\nLa sequenza riordinata e': ");
        for (int i = 0; i < DIM; ++i)
        {
            printf("%4d", vet[i]);
        }
return 0;
}
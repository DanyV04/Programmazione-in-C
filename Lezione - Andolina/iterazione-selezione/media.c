#include <stdio.h>

int main(void){
    int count = 0;
    int n1, sentinella = -1;
    int media = 0, somma = 0;
    printf("Inserisci un valore: \n");
    scanf("%d", &n1);
    while (n1 != sentinella)
    {
        somma += n1;
        printf("somma: %d\n", somma);
        count++;
        scanf("%d", &n1);

    }
    media = somma / count;
    printf("%d", media);
    return 0;
}

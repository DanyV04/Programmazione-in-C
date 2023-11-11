
#include <stdio.h>

int main(){
    int n1, n2, d1, d2, somma;
    printf("Inserire numeratore prima frazione\n");
    scanf("%d",&n1);
    printf("Inserisci denominatore prima frazione\n");
    scanf("%d",&d1);
    printf("Inserire numeratore seconda frazione\n");
    scanf("%d",&n2);
    printf("Inserisci denominatore seconda frazione\n");
    scanf("%d",&d2);

    somma = (n1/d1) + (n2/d2);
    printf("Risultato dell'operazione%d\n", somma);

}



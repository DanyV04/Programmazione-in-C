#include <stdio.h>

int main(){
    int n1;
    int n2;
    int somma;
    printf("Inserisci primo valore\n");
    scanf("%d", &n1);
    printf("Inserisci secondo valore\n");
    scanf("%d", &n2);

// primo input moltiplicatore
//secondo input numero che moltiplica

    for(int i=0; i<=n2; i++){ //inserimento del ciclo di somma 
                             // i=0 sempre così
        somma = somma + n1;
        printf("%d", somma);
    }
    
    return 0;
    
}
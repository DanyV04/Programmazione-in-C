// conteggiare anche spazi e eliminiarli

#include <stdio.h>
#include <string.h>
#define D 30 // dimensione dell'array
int main(){
    char str[D + 1];
    char sub[D + 1]; // lascio lo spazio per il termine nullo
    int i;
    int count = 1; // inizializzo sentinella
    char l_str = strlen(str);
    char l_sub = strlen(sub);
    printf("Inserisci una parola: ");
    scanf("%s", str);
    printf("Inserisci una parte della prima parola (ordinata): ");
    scanf("%s", sub);

    for (int i = 0; i + l_sub <= l_str &&count = 1; i++) // primo confronto
    {
        int count = 0;
        for (int j = 0; i < ; j++)
        {
            if (str[i + j] != sub[j]) // la condizione di verifica della stringa sulla sottostringa -- condizione girata per comodità
            {
                count = 1;
                // ferma l'operazione -- definisci l'indice e la posizione in cui avviene
                //  per uscire uso una sentinella -- definisco count = 1 --> per saltare fuori dal ciclo
            }
            else
            {
                // continua operazione di confronto
            }
        }
    }
    if (!count)
    {
        printf("sottostringa in %d", i-1); //a causa del post-incremento
    }else{
        printf("NO sottostringa");
    }
    
}

// come tornare a ritrovare la sottostringa
 /* il ritorno è salvato nella i del ciclo for iniziale --> usciamo nel momento nel quale troviamo la sottostringa
    -->  str[i + l_sub]  */
//  volendo salvare tutte le sottostringhe, come faccio a salvare tutte le variabili --> uso un array [quanto grande lo faccio, lo faccio per il caso peggiore ovvero a 30 caratteri ]
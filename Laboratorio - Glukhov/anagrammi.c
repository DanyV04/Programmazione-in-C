/*Si codifichi un programma C che legge due stringhe inserite dall'utente che rappresentano due parole 
e verifica se le parole sono ANAGRAMMI, cioè se è possibile ottenere l’una dall’altra tramite 
permutazione delle loro lettere. 
Stampa infine a schermo il risultato della verifica.  
Esempio: Le parole POLENTA e PENTOLA sono anagrammi Le parole TAPPO e PATTO non sono 
anagrammi  */

// DA CAPIRE
#include <stdio.h>
#include <string.h>
#define MAX 30
#define FRQ 26

int main(){
    char str1[MAX + 1], str2[MAX + 1];
    int count1[FRQ] = {0}, count2[FRQ] = {0};  //frequenza può essere considerato come un contatore  --- COSA VUOL DIRE CONTARE LA FREQUENZA DI UNA LETTERA
    int sonoAnagrammi = 1;
    printf("Inserisci una parola:");
    scanf("%s", str1);
    printf("Inserisci una parola:");
    scanf("%s", str2);

    // verifica delle frequenze delle stringhe

    for(int i = 0; str1[i] != '\0'; i++){   //prima stringa
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            count1[str1[i] - 'a']++;
        }
        
    }
    for (int i = 0; str2[i] != '\0'; i++){  //seconda stringa 
     if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            count2[str2[i] - 'a']++;
        }
    }

    // Verifica vera e propria dell'anagramma
        //Stiamo controllando la frequenza di comparsa delle lettere nella parola
    for (int j = 0; j < FRQ; j++){
        if (str1[j] != str2[j]) // se le stringhe sono diverse allora non sono anagrammi
        {
            sonoAnagrammi = 0;
            break;   // capire come evitare
        }
    }
    // ultimo passaggio  // non legge il caso finale
    if (sonoAnagrammi){
        printf("La parola %s e %s sono anagrammi", str1, str2);
    }else{
        printf("La parola %s e %s sono anagrammi", str1, str2); 
    }

return 0; 
}
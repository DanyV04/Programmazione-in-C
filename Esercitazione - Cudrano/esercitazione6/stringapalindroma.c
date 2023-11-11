 // DA FINIRE
#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
    char str[MAX + 1]; // con +1 consideriamo il carattere nullo [\0] -- possibilità di riempire completamente l'array con caratteri
    int b; 
    int k;
    int palindromo = 1;

    printf("Inserisci una parola: "); //leggo caratteri che comporrano la stringa -- %s legge i char inseriti
    gets(str);
    int j = strlen(str) - 1; // -1 riguarda la presenza del termine nullo che non deve essere analizzato come caso perchè non facente realmente parte della stringa

    for (k = 0,  b = 0; str[k] != '\0'; k++) {  // vengono tolti gli spazi alla parola 
        if (str[k] != ' ') {
            str[b] = str[k];
            b++;
        }
    }
    str[b] = '\0'; // Aggiunge il terminatore di stringa alla fine
    printf("%s", str);


    for (int i = 0; i < j  && palindromo == 1; i++, j--) // incremento da una parte e decremento dall'altra 
    {
        
        if (str[i] != str[j])
        {
         palindromo = 0;
        }
    }
    if (palindromo == 1)
    {
        printf("La parola e' palindroma");
    }else{
        printf("La parola NON e' palindroma");
    }
    
return 0; 
}




// gets(str); //legge tutta la stringa fino al a capo -- non come int che taglia al primo carattere


//str[i] == str[j]  || str[i]-str[j] = 32/02xd  --> condizione per far diventare maiuscola o minuscola una lettera

// processare stringa e togliere tutto ciò che da fastidio: spazi e caraterri maiuscoli 



/* SOLUZIONE PROFESSORE
    char c[];
    c = str[i];
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'){  // stessa cosa di utilizzare la tabella ascii

    }
*/
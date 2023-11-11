#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){
    char str[MAX + 1]; // con +1 consideriamo il carattere nullo [\0] -- possibilità di riempire completamente l'array con caratteri
    
    int palindromo = 1;

    printf("Inserisci una parola: "); //leggo caratteri che comporrano la stringa -- %s legge i char inseriti
    gets(str);
    int j = strlen(str) - 1; // -1 riguarda la presenza del termine nullo che non deve essere analizzato come caso perchè non facente realmente parte della stringa
    int temp = str[0];

	for(int k = 0; !(k >= 'a' || k <= 'z') || !(k >= 'A' || k <= 'Z'); k++){
		str[k] = str[k+1];
	}
	for( int b = 0; b < MAX; b++){
		printf("%s", str[b]);
	}

}

// implementare le frasi all'interno del programma

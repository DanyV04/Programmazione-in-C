#include <stdio.h>
#include <string.h>

void rimuoviSpazi(char* input) {
    int k, b;
    for (k = 0, b = 0; input[k] != '\0'; k++) {
        if (input[k] != ' ') {
            input[b] = input[k];
            b++;
        }
    }
    input[b] = '\0'; // Aggiunge il terminatore di stringa alla fine
}

int main() {
    char frase[] = "Questa e' una frase con spazi";
    gets(frase);
    printf("Frase originale: %s\n", frase);

    rimuoviSpazi(frase);

    printf("Frase senza spazi: %s\n", frase);

    return 0;
}

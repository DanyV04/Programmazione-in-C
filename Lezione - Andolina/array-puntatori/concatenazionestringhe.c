#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
    char s1[MAX*2], s2[MAX];
    char *str1, *str2; 
    char *ptr1= s1+ strlen(s1);
    int i = 0; // posizione di scorrimento

    printf("Inserisci la prima parola: ");
    gets(s1);
    printf("Inserisci la seconda parola: ");
    gets(s2);
    while (s2[i] != 0) // si va a concatenare la stringa 1 con la stringa 2
    {
        *(str1+i) = s2[i];
        i++;
    }
    *(ptr1 + i) = '\0';
}

/* PROBLEMA : 
  prendere due stringhe e far si che la seconda risulti unita alla prima
    ptr2 = s2;
    while(*ptr2 != '\0'){
        *ptr1 =  *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';
*/  

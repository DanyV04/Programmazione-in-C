#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
    char strin[MAX+1]; // stringa in input
    char strout[ 3*MAX + 1]; // stringa in output
    int i,j; //i --> indice input ----- j --> indice di output
    gets(str);
    for (i = 0, j = 0; strin[i] != '\0'; i++)
    {
        strout[j] = strin[i];
        j++;

        switch (strin[i])  // non entra nello switch se non è una vocale MAIUSC o MINUSC
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        strout[j] = 'f';
        j++;
        strout[j] = strin[i];
        j++;
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        strout[j] = 'F';
        j++;
        strout[j] = strin[i];
        j++;
            break;
        
        default:
            break;
        }
        

    }
    // stampare la stringa --- printf("%s", str)
}
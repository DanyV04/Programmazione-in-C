#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++) //ciclo principale
    {
        for (int ast = 0; ast < i; ast++) //ciclo che aggiunge gli asterischi dopo il primo
        {
            printf("%s", "*");
        }
        
        printf("%s\n", "*");
    }
    printf("\n");
    for (int j = 0; j < 10; j++)
    {
        for (int k = 9; k != j ; k--) //problema --> come invertire --> con k !=j 
        {
            printf("%s", "*");
        }
        printf("%s\n", "*");   
    }


    
// fare gli speculari di questi triangoli --> come? io so che ci sono + e - che associati ad un %d mi danno il destra sinistra in una situazione

   /* for (int i = 0; i < 10; i++) //ciclo principale
    {
        for (int ast = 0; ast < i; ast++) //ciclo che aggiunge gli asterischi dopo il primo
        {
            printf("%s", "*");
        }
        
        printf("%s\n", "*");
    }
    printf("\n");
    for (int j = 0; j < 10; j++)
    {
        for (int k = 9; k != j ; k--) //problema --> come invertire --> con k !=j 
        {
            printf("%+s", "*");
        }
        printf("%+s\n", "*");   
    }
    */
return 0; 
}
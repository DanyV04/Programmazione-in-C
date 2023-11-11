
// problema del programma è indicizzare correttamente il range per i biglietti

#include <stdio.h>
#define POSTI 10
int main()
{
    int choice, seat_number, seat_class; // selezione della classe di viaggio
    int posti[POSTI] = {0};
    int count = 0;                                   // counter per le posizioni assegnate sull'aereo
    printf("Please type 1 for FIRST CLASS: ");       // range 0-4
    printf("\nPlease type 2 for ECONOMY CLASS: \n"); // range 5-9
    scanf("%d", &choice);
    if (choice == 1 || choice == 2)
    {
        if (choice == 1)
        {
            seat_class = 1;
        }
        else
        {
            seat_class = 2;
        }
        for (seat_number = (seat_class == 1 ? 0 : 5); seat_number < (seat_class == 1 ? 5 : 10); seat_number++)
        {
            if (posti[seat_number] = 0)
            {
                posti[seat_number] == 1;
                break;
            }
        }

        if (seat_number < (seat_class == 1 ? 5 : 10))
        {
            printf("Boarding Pass\nSeat Number: %d\n", seat_number + 1);
            printf("Class: %s\n", seat_class == 1 ? "First Class" : "Economy");
        }
        else
        {
            printf("Sorry, the plane is full. Next flight leaves in 3 hours.\n");
        }
    }
    return 0;
}

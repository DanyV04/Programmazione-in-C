#include <stdio.h>
#define DIM_CORSO 100
#define DIM_COGNOME 20
#define DIM_ESAMI 5

typedef struct logbook
{
    char corso[DIM_CORSO];
    char prof[DIM_COGNOME];
    int cfu;
    int voto;
} esami_t;

esami_t ins_esame();
void out_esame(esami_t);
int media_pesata();

int main()
{
    esami_t esame[DIM_ESAMI];
    int n_esami;
    int num = 0, den = 0;
    printf("Numero di esami da inserire: ");
    scanf("%d", &n_esami);
    getchar(); // si cattura l'invio derivato dallo scanf
    printf("Inserisci informazioni relative a %d esami", n_esami);
    for (int i = 0; i <= DIM_ESAMI; i++) // ciclo per inserimento dei dati
    {
        esame[i] = ins_esame();
        num += esame[i].cfu * esame[i].voto; // [i] va messo nella posizione di corretta -- esame e' un array, non cfu
        den += esame[i].cfu;
    }
    for (int i = 0; i < DIM_ESAMI; i++)
    {
        out_esame(esame[i]); // non restituisce valori --- imposto l'i-esima posizione di esame come out
    }
    float media_pesata = num / den;
    printf("La media pesta e': %f ", media_pesata);
}

esami_t ins_esame()
{ // funzione di input per l'inserimento dei dati
    esami_t esame;
    printf("\nInserisci il nome del corso: ");
    fgets(esame.corso, DIM_CORSO, stdin);
    printf("\nInserire il cognome del docente: ");
    fgets(esame.prof, DIM_COGNOME, stdin);
    printf("\nInserire il numero di CFU; ");
    scanf("%d", &esame.cfu);
    printf("\nInserire il voto: ");
    scanf("%d", &esame.voto);
    getchar();
    return esame;
}

void out_esame(esami_t esame)
{ // funzione di output rispetto ai dati inseriti
    printf("\nMateria d'esame: %s", esame.corso);
    printf("\nCognome del professore: %s", esame.prof);
    printf("\nVoto dell'esame: %d", esame.voto);
    printf("\nCFU relativi all'esame: %d", esame.cfu);
}

// media pesata --> prodotto tra voto*CFU / somma dei cfu di ogni esame
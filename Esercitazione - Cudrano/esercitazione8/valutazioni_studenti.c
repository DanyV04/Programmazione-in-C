/*
Si definisca una struttura dati per gestire un registro elettronico del docente, contenente
le valutazioni di un’intera classe in una disciplina. Per ogni studente, è necessario
memorizzare nome, cognome e data di nascita. Una valutazione è espressa con un voto
da 1 a 10 (senza mezzi voti), è relativa a una data ed è associata a uno studente. Il registro
contiene l’elenco degli studenti e l’elenco di valutazioni assegnate.
Per semplicità, è possibile assumere che non esistano casi di omonimia di cognome.

Per casa: dato il nome di uno studente, calcolare la media delle sue valutazioni
*/

#include <stdio.h>
#include <string.h>
#define MAXSTR 50
#define MAXSTD 50 
#define MAX_SC 100 
#define NS  5  // numero di studenti massimo

typedef struct date_t  // GG -- MM -- AA di nascita di ogni studente
{
    int day, month, year;
}date_t;
typedef struct student_t  // Anagrafica studente
{
    char first_name[MAXSTR + 1]; // per includere anche il termine nullo
    char last_name[MAXSTR + 1]; // ""
    date_t birth_date;
}student_t;

typedef struct score {
    int score;
    date_t date;
    char last_name[MAXSTR];
}score_t;
typedef struct logbook_t // Registro del professore con valutazioni
{
    student_t students[MAXSTD];
    score_t score[MAX_SC];
    // devono essere definiti a 0 prima del loro effettivo utilizzo
    int student_dim;
    int score_dim;
}logbook_t; 

                // in questa prima versioni il numero di valutazioni corrisponde al numero di studenti per semplicità di inserimento, poi verrà modificato
int main(){   
    //inizializzazione del registro
    logbook_t r;  // definendo la variabile registro definisco anche le strutture al suo interno  --- definizione della struct all'interno del MAIN
    r.student_dim = 0;
    r.score_dim = 0;
    student_t s = {.first_name{"Daniele"}, .last_name{"Volonte'"}, .birth_date{"29-04-2004"}};
    float media_score = 0;
    int n_score;
    char last_name[MAXSTR + 1];
    gets(last_name);

    for (int i = 0; i < r.score_dim; i++)
    {
        if (strcmp(r.score[i].last_name, last_name) == 0 && r.score[i].date[i].month == 5) // compara le due stringhe 
        {
           media_score += r.score[i].score;
            n_score++;
        }      
    }
    if (n_score = 0)
    {
        printf("Non si hanno voti per lo studente");
    }else{
        media_score /= n_score;
    }
    
return 0;    
}
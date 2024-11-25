#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

#include "prodcons.h"

void inizializza(MonitorPC * p) {

    printf("Inizializzazione monitor\n");

    /* TBD: Inizializzare il monitor */

}


void rimuovi(MonitorPC * p) {

    printf("Rimozione monitor\n");

    /* TBD: Disattivare il monitor */

}


void produci_tipo_1(MonitorPC * p, int valore) {

    int index = 0;

    /* TBD: Aggiungere la sincronizzazione,
            in base allo schema con vettore di stato
     */


    printf("Produzione di tipo 1 in corso...\n");

    sleep(1);
    p->vettore[index] = valore;

    printf("Produzione di tipo 1 completata (valore=%d, index=%d)\n", valore, index);

}


void produci_tipo_2(MonitorPC * p, int valore) {

    int index = 0;

    /* TBD: Aggiungere la sincronizzazione,
            in base allo schema con vettore di stato
     */


    printf("Produzione di tipo 2 in corso...\n");

    sleep(1);
    p->vettore[index] = valore;

    printf("Produzione di tipo 2 completata (valore=%d, index=%d)\n", valore, index);

}


int consuma_tipo_1(MonitorPC * p) {

    int index = 0;

    int valore = 0;

    /* TBD: Aggiungere la sincronizzazione,
            in base allo schema con vettore di stato
     */


    printf("Consumazione di tipo 1 in corso...\n");

    sleep(1);
    valore = p->vettore[index];

    printf("Consumazione di tipo 1 completata (valore=%d, index=%d)\n", valore, index);


    /* NOTA: Dopo la consumazione, occorre risvegliare un produttore di tipo 1
             oppure un produttore di tipo 2. È indifferente dare la priorità ai
             produttori di tipo 1 oppure di tipo 2.
     */

    return valore;
}


int consuma_tipo_2(MonitorPC * p) {

    int index = 0;

    int valore = 0;

    /* TBD: Aggiungere la sincronizzazione,
            in base allo schema con vettore di stato
     */


    printf("Consumazione di tipo 2 in corso...\n");

    sleep(1);
    valore = p->vettore[index];

    printf("Consumazione di tipo 2 completata (valore=%d, index=%d)\n", valore, index);


    /* NOTA: Dopo la consumazione, occorre risvegliare un produttore di tipo 1
             oppure un produttore di tipo 2. È indifferente dare la priorità ai
             produttori di tipo 1 oppure di tipo 2.
     */

    return valore;
}
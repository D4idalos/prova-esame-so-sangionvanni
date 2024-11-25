#ifndef __PROCEDURE_H
#define __PROCEDURE_H

#include "monitor_hoare.h"

#define DIM 4

#define LIBERO 0
#define INUSO 1
#define OCCUPATO1 2
#define OCCUPATO2 3

typedef struct{

	int vettore[DIM];

	int stato[DIM];

	int num_liberi;
	int num_occupati_tipo1;
	int num_occupati_tipo2;

	/* TBD: aggiungere ulteriori variabili per la sincronizzazione */

} MonitorPC;

void inizializza(MonitorPC * p);
void rimuovi(MonitorPC * p);
void produci_tipo_1(MonitorPC * p, int valore);
void produci_tipo_2(MonitorPC * p, int valore);
int consuma_tipo_1(MonitorPC * p);
int consuma_tipo_2(MonitorPC * p);


#endif

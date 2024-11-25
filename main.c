#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/wait.h>
#include <time.h>

#include "prodcons.h"


void produttore_1(MonitorPC * p)
{
	srand(getpid());

	for(int i=0; i<4; i++) {

		int valore = rand() % 10;

		produci_tipo_1(p, valore);

		sleep(1);
	}

}


void produttore_2(MonitorPC * p)
{
	srand(getpid());

	for(int i=0; i<4; i++) {

		int valore = rand() % 10;

		produci_tipo_2(p, valore);

		sleep(1);
	}

}


void consumatore_1(MonitorPC * p)
{
	srand(getpid());

	for(int i=0; i<8; i++) {

		int valore = consuma_tipo_1(p);

		sleep(1);
	}

}


void consumatore_2(MonitorPC * p)
{
	srand(getpid());
	
	for(int i=0; i<8; i++) {

		int valore = consuma_tipo_2(p);

		sleep(1);
	}

}

int main(int argc, char *argv[])
{

	int i;


	MonitorPC * p = /* TBD: Allocare lo oggetto monitor in modo condiviso fra i processi */


	inizializza(p);
    

	// Creazione di 2 produttori di tipo 1

	for(i=0; i<2; i++) {

		/* TBD: Creare i processi figli, facendogli eseguire
		        la funzione "produttore_1"
		 */
	}

	// Creazione di 2 produttori di tipo 2

	for(i=0; i<2; i++) {

		/* TBD: Creare i processi figli, facendogli eseguire
		        la funzione "produttore_2"
		 */
	}



	// Creazione di 1 consumatore di tipo 1

	/* TBD: Creare i processi figli, facendogli eseguire
			la funzione "consumatore_1"
	 */



	// Creazione di 1 consumatore di tipo 2

	/* TBD: Creare i processi figli, facendogli eseguire
			la funzione "consumatore_2"
	 */



	/* TBD: Attendere la terminazione di tutti i processi figli */
	

	rimuovi(p);

	/* TBD: De-allocare lo oggetto monitor condiviso */
}


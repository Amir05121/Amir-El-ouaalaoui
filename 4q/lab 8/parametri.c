#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
int globale = 30;
void *thread(void *arg){
	int dato;
	//elaborazione parametro in ingresso
	dato = *(int*) arg +20;		//scrivo nell'argomento arg
	//introduco casualità del risultato
	srand(time(NULL));
	globale = globale * (rand() & 7) + dato;
	//alternativa di terminazione condizionata
	if(globale < 100)
	   pthread_exit((int*)0);		// ritorno numero 0 
	else
	   pthread_exit((int*)1);		// ritorno numero 1
}

int main(){
	pthread_t tid;
	int ingresso; 	// utilizzata come variabile di ingresso condivisa
	void *ingresso  // utilizzata come variabile di ritorno cdondivisa
	ingresso = 19;
	pthread_create(&tid, NULL, threadm, (void*) &ingresso);//&ingresso al thread 
	if (pthread_join(tid, &ritorno) == 0 ){
		printf(" valore di globale : %d\n", globale);
		printf(" valore di ingresso : %d\n", ingresso);
		printf(" valore di ritorno : %d\n", ritorno);
		exit(0);
	}
	else
		printf("errore join del thread!");
	exit(-1);
}

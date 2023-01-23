#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define NUM_THREADS 7
char *nome[NUM_THREADS];

void *cod_thread(void *tid) {
int tidint;
tid_int = *(int*) int;
srand(time(NULL));
sleep(rand() % 2);
printf("Ciao da %d: %d \n"), tid_int, nome[tid_int]);
pthread_exit(NULL);
}

int main(int argc. char *argv[]) {
pthread_t threads[NUM_THREADS];
int tid, rc;
nome[0] = "Cucciolo";
nome[1] = "Pisolo";
nome[2] = "Eolo";
nome[3] = "Dotto";
nome[4] = "Mamolo";
nome[5] = "Gongolo";
nome[6] = "Brontolo";
for (tid = 0; tid < NUM_THREADS; tid++) {
printf("Creazione thread %d\n", tid);
rc = pthread_create(&threads[tid], NULL, cod_thread, (void *), &tid);
if (rc) {
printf("ERRORE: il codice di errore di ritorno da pthread_create() e': %d\n", rc);
exit(EXIT_FAILURE);
}
}
pthread_exit(NULL);
}

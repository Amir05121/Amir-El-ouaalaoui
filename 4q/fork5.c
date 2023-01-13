#include<stdio.h>
#include<stdlib.h>

int main() {
	int pid1, pid2, pid3;
	pid1 = fork();
	if (pid1 == 0) {
		printf("1) Sono il primo processo figlio con pid: %i\n.", getpid());
		exit(1);
	} else {
	    sleep(2);
	    printf("2) Sono il processo padre\n");
	    printf("3) Ho creato un processo con pid: %i\n", pid1);
	    printf("4) Il mio pid e' invece: %i\n", getpid());
	    pid2 = fork();
	    if (pid2 == 0) {
	        printf("5) Sono il secondo processo figlio con pid:%i\n", getpid());
	        exit(2);
	    } else {
	        printf("6) Sono il processo padre\n");
	        printf("7) Ho creato un secondo processo con pid: %i\n", pid2);
	    }
	}
	return 0;
}

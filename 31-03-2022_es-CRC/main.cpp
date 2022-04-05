/*Il software deve:
Punto 1 del libro
- dare la scelta di quanti bits trasmettere (da 8 a 32)
- generare una sequenza random di bits da trasmettere
- stampare i dati originali e il polinomio M(x)

Punto 2
- dare la scelta di quale polinomio divisore G(X) utilizzare (stampando i polinomi riportati dal libro)
Punto 3
- generare e stampare il polinomio D(x)Punto 4
- calcolare e stampare il resto della divisione in modulo 2 fra G(X) e D(x)

- definire e stampare il codeword da trasmettere

- generare casualmente due posizioni di bits nei dati da trasmettere, per ognuna delle due posizioni decidere casualmente, con probabilita' fra 0.1 e 0.3 (valore esatto scelto da voi) se introdurre un errore invertendo il bit in quella posizione
- stampare se sono stati introdotti errori e in quale posizione

- scrivere funzione prende in input la codeword/k e stampa se rileva errori o meno, immediatamente al di sotto della stampa degli errori eventualmente introdotti del punto precedente
*/

#include <string>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Amir
void sequenza(int m[], int bits){
	int ciao=0;
		srand(time(NULL));
	for(int i=0; i<bits; i++){
		ciao =rand()%2;
		m[i]=ciao;
	}
}






int main(int argc, char** argv) {
	//Ema & Amir
	int bits, i;
	cout<<"Inserire bit da 8 a 32: ";
	cin>>bits;
	if(bits>7&&bits<33){
		cout<<"bit corretti"<<endl;
	}else{
		cout<<"bit scorretti"<<endl;
		system("pause");
	}
	//Amir
	int m[bits];
	sequenza(m, bits);
	//Ema
	cout<<"Bit"<<endl;
	cout<<bits<<endl;
	cout<<"Bit generato"<<endl;
	for(int i=0; i<bits; i++){
		cout<<m[i];
	}
	cout<<""<<endl;
	cout<<"a=m[14]+m[10]+m[3]+1, m[14]+m[13]+m[0]+1, b=m[30]+m[24]+m[21]+m[20]+m[14]+m[10]+m[9]+m[8]+m[6]+m[5]+m[3]+m[2]+m[0]+m[0]+1, c=x^64+x^4+x^3+x+1"<<endl;
	//Ema
		
	
	return 0;
}

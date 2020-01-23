#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 100000

// input data
int N, risultato;
int C[MAXN];

int main() {
	//Apertura dei file necessari impostandoli come standard input e standard output
	freopen("input/1", "r", stdin);
	freopen("output/1", "w", stdout);

	//assegnazione di valori a variabile --> "%d" indica un decimale
	// con scanf si leggono i valori di un file SOLO IN FILA
	// assert controlla se i parametri restituiti da scanf sono corretti
    assert(1 == scanf("%d", &N));
    //assegnazione dei valori al vettore (riempimento)
    for(int i=0; i<N; i++)
        assert(1 == scanf("%d", &C[i]));
    
    for(int i=0; i<N; i++)
    {
    	risultato += C[i];
	}
    
    //Stampa del risultato sul file output
    printf("%d\n", risultato);
}

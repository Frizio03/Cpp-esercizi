// Autore: Fabrizio Tedeschi

// libreria principale
#include <iostream>
//librerie random
#include <ctime>
#include <cstdlib>

using namespace std;

//funzione random
int random(int n1, int n2)
{
	return rand() % (n1-n2+1)+n1;
}

//funzione per scambiare 2 variabili
int scambia(int a, int b)
{
	int box = a;
	a = b;
	b = box;
}

//ordinamento ingenuo di un vettore
int ordinamento_ingenuo(int v[], int len)
{
	for (int i=0; i<len-1; i++)
	{
		for (int j=i+1; j<len; j++)
		{
			if (v[i]>v[j])
				scambia(v[i], v[j]);
		}
	}
}

int main()
{
	//inizializzazione dei millisecondi
	srand(time (NULL));
}

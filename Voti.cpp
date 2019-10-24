// Autore: Fabrizio Tedeschi

/*
il programma crea un vettore di 15 elementi random
il vettore viene riordinato
si cerca uno specifico numero dentro al vettore
*/

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

//funzione scambia
int scambia(int &a, int &b)
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
				scambia(v[j], v[i]);
		}
	}
	
	cout << "vettore ordinato: " << endl;
	for (int i=0; i<len; i++)
	{
		cout << v[i] << " / ";
	}
	cout << endl;
}

//creazione di un vettore con elementi random
int rand_vett(int len, int min, int max)
{
	cout << "vettore random:" << endl;
	int vettore[len];
	for (int i=0; i<len; i++)
	{
		vettore[i] = random(min,max);
		cout << vettore[i] << " / ";
		
	}
	cout << endl;
	ordinamento_ingenuo(vettore, len);
}

int main()
{
	//inizializzazione dei millisecondi
	srand(time (NULL));
	
	int len, max, min;
	
	cout << "\nInserire la lunghezza del vettore: ";
	cin >> len;
	cout << "\nInserire il numero random minimo: ";
	cin >> min;
	cout << "\nInserire il numero random massimo: ";
	cin >> max;
	cout << endl;
	
	//si crea e si ordina un  vettore di x elementi
	rand_vett(len, min, max);
	
	//si cerca un elemento nel vettore
}

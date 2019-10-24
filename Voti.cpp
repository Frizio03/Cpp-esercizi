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

int scambia(int &a, int &b)
{
	int box = a;
	a = b;
	b = box;
}

//ordinamento ingenuodi un vettore
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
	
	for (int i=0; i<len; i++)
	{
		cout << v[i] << " / ";
	}
	cout << endl;
}

//creazione di un vettore con elementi random
int rand_vett(int numero)
{
	int vettore[numero];
	cout << "lista:" << endl;
	for (int i=0; i<numero; i++)
	{
		vettore[i] = random(0,10);
		cout << vettore[i] << " / ";
		
	}
	cout << endl;
	ordinamento_ingenuo(vettore, numero);
}

int main()
{
	//inizializzazione dei millisecondi
	srand(time (NULL));
	
	rand_vett(15);
}

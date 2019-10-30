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

// ricerca elemento all'interno di un vettore
bool cerca(int v[], int elemento, int len)
{
	int count=1, i=0, f=len-1, m;
	while(i<=f)
	{
		m = (i+f)/2;
		if (v[m] > elemento)
			f = m - 1;
		else if (v[m] < elemento)
			i = m + 1;
		else if (v[m] == elemento)
		{
			cout << "Il numero " << elemento << " trovato in " << count << " passaggi" << endl;
			return true;
		}
		count += 1;
	}
	
	cout << "Il numero " << elemento << " NON viene trovato nel vettore" << endl;
	return false;
	
}

int bubbleSort(int v[], int len) 
{ 
   int i, j; 
   bool swapped; 
   for (i = 0; i < len-1; i++) 
   { 
     swapped = false; 
     for (j = 0; j < len-i-1; j++) 
     { 
        if (v[j] > v[j+1]) 
        { 
           scambia(v[j], v[j+1]); 
           swapped = true; 
        } 
     } 
  
     // IF no two elements were swapped by inner loop, then break 
     if (swapped == false) 
        break; 
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
	cout << endl << endl;
	bubbleSort(vettore, len);
	int cercato;
	cout << "\nInserire il numero da cercare: ";
	cin >> cercato;
	cerca(vettore, cercato, len);
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

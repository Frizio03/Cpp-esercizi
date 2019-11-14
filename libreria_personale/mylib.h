#include <iostream>
using namespace std;

int raddoppia(int n)
{
	return n*2;
}

//funzione random int
int random(int n1, int n2)
{
	return rand() % (n1-n2+1)+n1;
}

//funzione per scambiare 2 variabili
int scambia(int &a, int &b)
{
	int box = a;
	a = b;
	b = box;
}

//ordinamento ingenuo di un vettore di int
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
	
	cout << "vettore ordinato: " << endl;
	for (int i=0; i<len; i++)
	{
		cout << v[i] << " / ";
	}
	cout << endl;
}

//bubble sort di ordinamento vettore di int
int bubbleSort(int v[], int len) 
{ 
   int i, j; 
   bool ordinato; 
   for (i = 0; i < len-1; i++) 
   { 
     ordinato = false; 
     for (j = 0; j < len-i-1; j++) 
     { 
        if (v[j] > v[j+1]) 
        { 
           scambia(v[j], v[j+1]); 
           ordinato = true; 
        } 
     } 
  
     // IF no two elements were swapped by inner loop, then break 
     if (ordinato == false) 
        break; 
   } 
   
   cout << "vettore ordinato: " << endl;
	for (int i=0; i<len; i++)
	{
		cout << v[i] << " / ";
	}
	cout << endl;
}

//Ordinamento per bubbleSort con SENTINELLA
int bubbleSort_sentinella(int v[], int len) 
{ 
   int i; 
   bool ordinato; 
   do { 
     ordinato = false; 
     for (i = 0; i < len-1; i++) 
     { 
        if (v[i] > v[i+1]) 
        { 
           scambia(v[i], v[i+1]); 
           ordinato = true; 
        } 
     } 
  
   }while(ordinato==true);
   
   	cout << "vettore ordinato: " << endl;
	for (int i=0; i<len; i++)
	{
		cout << v[i] << " / ";
	}
	cout << endl;
}

// ricerca elemento all'interno di un vettore
bool ricerca_binaria(int v[], int elemento, int len)
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

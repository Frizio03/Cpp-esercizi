#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//funzione random int
int random_int(int n1, int n2)
{
	return rand() % (n1-n2+1)+n1;
}

//funzione random float
float random_float(int n1, int n2)
{
	int v1 = rand() % (n1-n2+1)+n1;
	return (float)v1/10;
}

//funzione per scambiare 2 variabili int
void scambia_int(int &a, int &b)
{
	int box = a;
	a = b;
	b = box;
}

//funzione per scambiare 2 variabili float
void scambia_float(float &a, float &b)
{
	float box = a;
	a = b;
	b = box;
}

//creazione di un vettore con elementi random int
void riempi_vettore_random_int(int v[], int len, int min, int max)
{
	for (int i=0; i<len; i++)
	{
		v[i] = random_int(min,max);
	}
}

//creazione di un vettore con elementi random float
void riempi_vettore_random_float(float v[], int len, float min, float max)
{
	for (int i=0; i<len; i++)
	{
		v[i] = random_float(min, max);
	}
}

//stampa il vettore di int
void stampa_vettore_int(int v[], int len)
{
	cout << "\n" << "Il tuo vetore INT: [";
	for (int i=0; i<len; i++)
	{
		cout << " " << v[i] << ",";
	}
	cout << "]" << endl;
}

//stampa il vettore di float
void stampa_vettore_float(float v[], int len)
{
	cout << "\n" << "Il tuo vetore Float: [";
	for (int i=0; i<len; i++)
	{
		cout << " " << v[i] << ",";
	}
	cout << "]" << endl;
}

//ordinamento ingenuo di un vettore di int
void ordinamento_ingenuo_int(int v[], int len)
{
	cout << "\nOrdino ingenuamente il vettore..." << endl;
	for (int i=0; i<len-1; i++)
	{
		for (int j=i+1; j<len; j++)
		{
			if (v[i]>v[j])
				scambia_int(v[i], v[j]);
		}
	}
}

//ordinamento ingenuo di un vettore di float
void ordinamento_ingenuo_float(float v[], int len)
{
	cout << "\nOrdino ingenuamente il vettore..." << endl;
	for (int i=0; i<len-1; i++)
	{
		for (int j=i+1; j<len; j++)
		{
			if (v[i]>v[j])
				scambia_float(v[i], v[j]);
		}
	}
}

//Ordinamento per bubbleSort con SENTINELLA di int
void bubbleSort_int(int v[], int len) 
{ 
   cout << "\nOrdino il vettore con Bubble Sort..." << endl;
   bool ordinato; 
   do { 
     ordinato = false; 
     for (int i = 0; i < len-1; i++) 
     { 
        if (v[i] > v[i+1]) 
        { 
           scambia_int(v[i], v[i+1]); 
           ordinato = true; 
        } 
     } 
  
   }while(ordinato==true);
}

//Ordinamento per bubbleSort con SENTINELLA di float
void bubbleSort_float(float v[], int len) 
{ 
   cout << "\nOrdino il vettore con Bubble Sort..." << endl;
   bool ordinato; 
   do { 
     ordinato = false; 
     for (int i = 0; i < len-1; i++) 
     { 
        if (v[i] > v[i+1]) 
        { 
           scambia_float(v[i], v[i+1]); 
           ordinato = true; 
        } 
     } 
  
   }while(ordinato==true);
}

// ricerca elemento all'interno di un vettore di int
bool ricerca_binaria_int(int v[], int elemento, int len)
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

// ricerca elemento all'interno di un vettore di float
bool ricerca_binaria_float(float v[], float elemento, int len)
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

//resituisce il numero maggiore di un vettore int
int vmaggiore_int(int v[], int len)
{
	int vmax=v[0];
	for (int i = 0; i < len; i++)
	{
		if (v[i]>vmax)
			vmax = v[i];
	}
	return vmax;
}

//resituisce il numero maggiore di un vettore float
float vmaggiore_float(float v[], int len)
{
	float vmax=v[0];
	for (int i = 0; i < len; i++)
	{
		if (v[i]>vmax)
			vmax = v[i];
	}
	return vmax;
}

//resituisce l'indice del numero maggiore di un vettore int
int index_vmaggiore_int(int v[], int len)
{
	int vmax=v[0], index=0;
	for (int i = 0; i < len; i++)
	{
		if (v[i]>vmax)
		{
			vmax = v[i];
			index=i;
		}
	}
	return index;
}

//resituisce l'indice del numero maggiore di un vettore float
float index_vmaggiore_float(float v[], int len)
{
	float vmax=v[0];
	int index=0;
	for (int i = 0; i < len; i++)
	{
		if (v[i]>vmax)
		{
			vmax = v[i];
			index=i;
		}
	}
	return index;
}

//resituisce il numero maggiore di un vettore int
int vminore_int(int v[], int len)
{
	int vmin=v[0];
	for (int i = 0; i < len; i++)
	{
		if (v[i]<vmin)
			vmin = v[i];
	}
	return vmin;
}

//resituisce il numero maggiore di un vettore float
float vminore_float(float v[], int len)
{
	float vmin=v[0];
	for (int i = 0; i < len; i++)
	{
		if (v[i]<vmin)
			vmin = v[i];
	}
	return vmin;
}

//resituisce l'indice del numero minore di un vettore int
int index_vminore_int(int v[], int len)
{
	int vmin=v[0], index=0;
	for (int i = 0; i < len; i++)
	{
		if (v[i]<vmin)
		{
			vmin = v[i];
			index=i;
		}
	}
	return index;
}

//resituisce l'indice del numero minore di un vettore float
float index_vminore_float(float v[], int len)
{
	float vmin=v[0];
	int index=0;
	for (int i = 0; i < len; i++)
	{
		if (v[i]<vmin)
		{
			vmin = v[i];
			index=i;
		}
	}
	return index;
}

//restituisce la media degli elementi del vettore int
int vmedia_int(int v[], int len)
{
	int somma=0;
	for (int i=0; i<len; i++)
	{
		somma += v[i];
	}
	return somma/len;
}

//restituisce la media degli elementi del vettore int
float vmedia_float(float v[], int len)
{
	float somma=0;
	for (int i=0; i<len; i++)
	{
		somma += v[i];
	}
	return somma/len;
}

int ricerca_int(int v[], int find, int len)
{
	for (int i=0; i<len; i++)
	{
		if (v[i]==find)
		{
			cout << "L'elemento " << find << " trovato in " << i+1 << " passaggi" << endl;
			return i;
		}
	}
		cout << "L'elemento " << find << " NON viene trovato nel vettore" << endl;
}

int ricerca_float(float v[], float find, int len)
{
	for (int i=0; i<len; i++)
	{
		if (v[i]==find)
		{
			cout << "L'elemento " << find << " trovato in " << i+1 << " passaggi" << endl;
			return i;
		}
	}
	
	cout << "L'elemento " << find << " NON viene trovato nel vettore" << endl;
}

// gira al contrario un vettore di int
void reverse_int(int v[], int len)
{
	int mezzo=len/2;
	for (int i=0; i<mezzo; i++)
	{
		scambia_int(v[i], v[len-i-1]);
	}
}

// gira al contarrio un vettore di float
void reverse_float(float v[], int len)
{
	int mezzo=len/2;
	for (int i=0; i<mezzo; i++)
	{
		scambia_float(v[i], v[len-i-1]);
	}
}

// elimina un elemento dal vettore int
void elimina_int(int v[], int elem, int len)
{
	int index = ricerca_int(v, elem, len);
	for (int i=index; i<len; i++)
	{
		v[i]=v[i+1];
	}
	v[len-1]=0;
}

// elimina un elemento dal vettore float
void elimina_float(float v[], float elem, int len)
{
	int index = ricerca_float(v, elem, len);
	for (int i=index; i<len; i++)
	{
		v[i]=v[i+1];
	}
	v[len-1]=0;
}
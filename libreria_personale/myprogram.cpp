// Autore: Fabrizio Tedeschi
#include <iostream>
#include "mylib.h" //importo la mia libreria presente nella stessa cartella

using namespace std;

int main()
{
	int len;
	cout << "Scrivere la lunghezza dei vettori: ";
	cin >> len; cout << endl;
	
	srand(time(NULL));
	
	int min, max, Vint[len], findint;
	float minf, maxf, Vfloat[len], findfloat;
	
	cout << "Scrivere il numero minimo del vettore INT: ";
	cin >> min; cout << endl;
	cout << "Scrivere il numero massimo del vettore INT: ";
	cin >> max; cout << endl;
	cout << "Scrivere il numero minimo del vettore FLOAT: ";
	cin >> minf; cout << endl;
	cout << "Scrivere il numero massimo del vettore FLOAT: ";
	cin >> maxf; cout << endl;
	cout << "Scrivere il numero da cercare nel vettore INT: ";
	cin >> findint; cout << endl;
	cout << "Scrivere il numero da cercare nel vettore FLOAT: ";
	cin >> findfloat; cout << endl;
	
	cout << "-----------------------------------------------------" << endl;
	
	riempi_vettore_random_int(Vint, len, min, max);
	riempi_vettore_random_float(Vfloat, len, minf*10, maxf*10);
	
	stampa_vettore_int(Vint, len);
	stampa_vettore_float(Vfloat, len);
	
	cout << endl;
	
	ricerca_int(Vint, findint, len);
	ricerca_float(Vfloat, findfloat, len);
	
	cout << "\n-----------------------------------------------------" << endl;
	
	cout << "\nIl minore degli INT: " << vminore_int(Vint, len) << endl;
	cout << "Il maggiore degli INT: " << vmaggiore_int(Vint, len) << endl;
	cout << "Il minore dei FLOAT: " << vminore_float(Vfloat, len) << endl;
	cout << "Il maggiore dei FLOAT: " << vmaggiore_float(Vfloat, len) << endl;
	cout << endl;
	cout << "La media degli INT: " << vmedia_int(Vint, len) << endl;
	cout << "La media dei FLOAT: " << vmedia_float(Vfloat, len) << endl;
	
	cout << "\n-----------------------------------------------------" << endl;
	
	//PER USARE UN ORDINAMENTO BISOGNA COMMENTARE QUELLO INUTILIZZATO
	
	ordinamento_ingenuo_int(Vint, len);
	ordinamento_ingenuo_float(Vfloat, len);
	
	bubbleSort_int(Vint, len);
	bubbleSort_float(Vfloat, len);
	
	stampa_vettore_int(Vint, len);
	stampa_vettore_float(Vfloat, len);
	
	cout << endl;
	
	ricerca_binaria_int(Vint, findint, len);
	ricerca_binaria_float(Vfloat, findfloat, len);
}

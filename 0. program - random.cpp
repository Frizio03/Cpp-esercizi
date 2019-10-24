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

int main()
{
	//inizializzazione dei millisecondi
	srand(time (NULL));
	
	//random tra 0 e un numero n
	int n = 50;
	cout << "Random normale da 0 a max: "<< rand() % (n+1) << endl;
	
	//random di numeri compresi tra valori min e max
	int min=10, max = 32;
	cout << "Random fra 10 e 32: " << rand() % (max-min+1)+min << endl;
	
	cout << "Funzione random tra 10 e 32: " << random(min, max) << endl;
	cout << "Funzione random tra 10 e 32: " << random(min, max) << endl;
	cout << "Funzione random tra 10 e 32: " << random(min, max) << endl;

}

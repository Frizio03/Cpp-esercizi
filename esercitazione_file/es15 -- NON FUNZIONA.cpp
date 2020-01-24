#include <stdio.h>
#include <assert.h>
#include <iostream>

using namespace std;

// input data
int N, risultato;
string C[10000];
int i=0, count=0;

int main() {
	//Apertura dei file necessari impostandoli come standard input e standard output
	freopen("input/15", "r", stdin);
	freopen("output/15", "w", stdout);
    
    //metto i valori della stringa in un vettore fino a quando scanf trova dei caratteri e restituisce 1
    while(scanf("%s", &C[count])>0)
    {
		count++; 
	}
	
	//stampa dell'output su file
	for(i=0; i<count; i++)
	{
		cout << C[i] << endl;
		//printf("%s", C[i]);
	}
}

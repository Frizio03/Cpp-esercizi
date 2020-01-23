#include <stdio.h>
#include <assert.h>

// input data
int N, risultato;

int main() {
	//Apertura dei file necessari impostandoli come standard input e standard output
	freopen("input/11", "r", stdin);
	freopen("output/11", "w", stdout);

	//input valori da file
    assert(1 == scanf("%d", &N));
    int L[N];
    for(int i=0; i<N; i++)
        assert(1 == scanf("%d", &L[i]));
    
    //programma es tampa del risultato con aggiunta di " " dopo ogni numero
    for(int i=0; i<N; i++)
    {
    	if(L[i]%2==0)
			printf("%d ", 1);
		else
			printf("%d ", 0);
	}    
}

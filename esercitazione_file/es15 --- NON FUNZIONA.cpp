#include <stdio.h>
#include <assert.h>

int main() {
	//Apertura dei file necessari impostandoli come standard input e standard output
	freopen("input/15", "r", stdin);
	freopen("output/15", "w", stdout);

    while(scanf("%s", &C[i])>0)
    {
    	
    }
    
    for(int i=0; i<N; i++)
    {
    	risultato += C[i];
	}
    
    //Stampa del risultato sul file output
    printf("%d\n", risultato);
}

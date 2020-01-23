#include <stdio.h>
#include <assert.h>
#include <iostream>

using namespace std;

// input data
int N, risultato;
char C[MAXN], L[MAXN];
int i=0, count=0;

int main() {
	//Apertura dei file necessari impostandoli come standard input e standard output
	freopen("input/i6", "r", stdin);
	freopen("output/o6", "w", stdout);
    
    while(scanf("%c", &C[i])>0)
    {
    	if(C[i]!="a" || C[i]!="e" || C[i]!="i" || C[i]!="o" || C[i]!="u" || C[i]!="y")
    	{
    		L[count] = C[i];
    		count++;
		}
		i++; 
	}
	
	for(i=0; i<count; i++)
	{
		printf("%c", L[i])
	}
}

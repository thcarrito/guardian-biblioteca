#include <bits/stdc++.h>

#define forr(i,a,b) for(int i =(a); i < (b); i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))
using namespace std;

int cuentapuntos(int n, char c[]){
	int count=0;
	
	forn(i, n){
		if(c[i] == '.'){
			count=count+1; //count++;
		}
	}
	return count;
}
 //XX..X..XXX
int main(){
	//leer m casos de entrada, termina con 0
	// primer numero leido es n, cantidad de caracteres que siguen en la proxima linea
	// leer la proxima linea de caracteres (array de 10^4 ) y usar n para determinar el largo del array
	// contar cuantos caracteres puntos hay en el array. si es par, imprimir N, si no imprimir S
	
	int n, cantidad;
	char c[100000];
	while(cin >> n,n != 0){
		cin >> c;
		cantidad = cuentapuntos(n,c);
		if(cantidad % 2 == 0){
			cout<< "N" << endl;
		}else{
			cout<< "S" << endl;
		}
	}	
	return 0;
}

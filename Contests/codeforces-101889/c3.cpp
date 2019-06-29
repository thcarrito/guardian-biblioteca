#include <bits/stdc++.h>

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))
#define dprint(v) cout << #v"=" << v << endl

using namespace std;

//Funcion que devuelve la posicion del numero mayor de un array
int pMayor(int *r, int n){
	int m = *r;
	int pos = 0;
	forn(i,n){
		if(*(r+i) > m){
			m = *(r+i);
			pos = i;
		}
	}
	return pos;
}

//Funcion que devuelve la posicion del numero menor de un array
int pMenor(int *r, int n){
	int m = *r;
	int pos = 0;
	forn(i,n){
		if(*(r+i) < m){
			m = *(r+i);
			pos = i;
		}
	}
	return pos;
}

int main() {
	int k, n , a, max, min, maxi, mini, z;
	cin >> k >> n;
	int c[k];
	zero(c); //Setear array con 0 en todos los indices
	
	//Leer la secuencia y contar la frecuencia de cada numero
	forn(i,n){
		cin >> a;
		c[a - 1]++; // cuenta cada numero en 'c' se guarda corrido un lugar a la izquierda
	}
	//////////////////////////////////////////////////
	
	
	//Obtener maximo y minimo del array c
	//Guardar valores y posiciones
	//pMayor/Menor devuelven la Posicion del max o min
	maxi = pMayor(c,k); max = c[maxi];
	mini = pMenor(c,k); min = c[mini];
	//////////////////////////////////////////////////
	
	
	//La secuencia tiene solucion si el maximo
	//y el minimo estan a distancia 1 o 2
	if((max-1) == min || (max-2) == min){
		//Comprobar si reduciendo
		//en 1 al maximo todas las frecuencias son iguales
		c[maxi]--;
		z = pMayor(c,k);
		if(c[z] == y) {
			cout << "-" << maxi + 1 << endl; //Imprimir la posicion de la frecuencia corregida mas uno
			return 0; //termina el programa
		}
		c[maxi]++;
		//////////////////////////////////////////////////
		
		//Comprobar si aumentando (si llego hasta aca entonces el de arriba no es valido)
		//en 1 al minimo todas las frecuencias son iguales
		c[mini]++;
		z = pMenor(c,k);
		if(c[z] == x) {
			cout << "+" << mini + 1 << endl;N
			return 0;
		}
		//////////////////////////////////////////////////
		
		//Comprobar si disminuyendo en 1 al maximo (el minimo ya esta disminuido en 1) las f son =
		if(c[z] == (x-1)){
			cout << "-" << maxi + 1 << " +" << mini + 1 << endl;
			return 0;
		}
		cout << "*" << endl;
	}else{
		cout << "*" << endl;
	}
    return 0;
}

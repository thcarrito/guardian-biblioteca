#include <bits/stdc++.h>

#define forr(i,a,b) for(int i = (a); i < (b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

long cantMax(int n){
	long r = 0;
	forn(i,n+1){
		r += factorial(n)/(factorial(n-i)*factorial(i));
	}	
	return r;
}

bool isCreated(char tabla[][10000], int k, int n, int cant){
	bool r = true;
	forn(i,cant){
		if(i != k){
			forn(j,n){
				r = r && tabla[i][j] != tabla[k][j];
			}
			if (!r) return r;
		}
	}
	return r;
}

int main(){
	int n, t, countx, a, cant, watchDog = 0, max;
	char c[2] = {'.', 'X'};
	cout << "Ingrese N T CANT: ";
	cin >> n >> t >> cant;
	char tabla[cant][10000];
	cout << endl;
	max = cantMax(n);
	if(cant == 0) cant = max;
	cout << "Cantidad de casos para N: " << max << endl;
	forn(i, cant){
		watchDog++;
		countx = 0;
		forn(j, n){
			a = rand() % 2;
			if(a == 1) countx++;
			if(countx == 3) countx = 0, a = 0;
			tabla[i][j] = c[a];
			cout << c[a] << " ";	
		}
		if(isCreated(tabla, i, n, cant)) i--;
		cout << endl;
		if(watchDog >= max) break;
	}
	return 0;
}

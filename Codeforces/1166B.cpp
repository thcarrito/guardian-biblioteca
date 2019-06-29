#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

void factorizar(long long n, int *a, int m){

	int f = 2, i = 0;

	while (n>1 && i < m) {
		if (n%f==0) {
			*(a + i) = f;
			n = n/f;
			i++;
		}
		else
			f++;
	}
}


int main(){
	int k;
	
	cin >>k;
	
	int a[k] = {0};
	
	factorizar(k, a, k);
	
	if(k < 25 || k == 32 || k == 27){
		cout << "-1" << endl;
		return 0;
	}
		
	
	int count = 0;
	forn(i,k)
		count += (a[i] != 0 && a[i] != 1) ? 1 : 0;
	sort(a,a+k);
	int b[count]; // Arreglo ordenado de mayor a menor con los primos de k (sin el 1)
	forn(i, count) b[i] = a[k-i-1];
	//forn(i,count) cout << b[i] << endl;
	if(count > 3){
		//funca multiplico los minimos hasta >= 5 excepto por 36 y 54
	}else if( count == 1){
		cout << "-1" << endl, return 0;
	}else if( count == 2){
		if(k%2 * k%3 != 0){
			//funca esos dos
		}else{
			cout << "-1" << endl, return 0;
		}
	}else{
		if(k % 6 == 0){
			//funca 6 y lo que te sobre ameo
		}else if(k % 4 != 0){
			// funca agarrando los minimos hasta >= 5
		}else{
			cout << "-1" << endl, return 0;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

bool boolFib[500] = {0};
long long fibArreglo[500];

long long fib(long long n){
	if(n == 2 || n == 1)
		return 1;
	if(boolFib[n])
		return fibArreglo[n];
	boolFib[n] = 1;
	fibArreglo[n] = fib(n-1) + fib(n-2);
	return fibArreglo[n];
}

int main(){
	fibArreglo[0] = 0;
	fibArreglo[1] = 1;
	fibArreglo[2] = 1;
	boolFib[0] = 1;
	boolFib[1] = 1;
	boolFib[2] = 1;

	long long k, m, a = 1, i = 1, j = 0;
	while(cin >> k >> m, k != -1){
		i = 1;
		j = 0;
		a = fib(i);
		while(j < k){
			a = fib(i);	
			if(a % m == 0 && a != 1)
				j++;
			i++;
		}
		i--;
		cout << i << endl;
	}
	return 0;
}

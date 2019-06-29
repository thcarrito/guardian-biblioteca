#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

#define MAX 10000000

bool boolFib[MAX] = {0};
long long fibArreglo[MAX];

long long fib(long long n){
	if(n == 2 || n == 1)
		return 1;
	if(n < MAX){
		if(boolFib[n])
		return fibArreglo[n];
	}
	if(n < MAX){
		boolFib[n] = 1;
		fibArreglo[n] = fib(n-1) + fib(n-2);
		return fibArreglo[n];
	}else{
		return fib(n-1) + fib(n-2);
	}
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	fibArreglo[0] = 0;
	fibArreglo[1] = 1;
	fibArreglo[2] = 1;
	boolFib[0] = 1;
	boolFib[1] = 1;
	boolFib[2] = 1;

	long long k, m, a = 1, i = 1, j = 0;
	while(cin >> k >> m, k != EOF){
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

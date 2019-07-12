#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

long long afib[10000000];
bool b[10000000] = {false};


using namespace std;

//O(n)
long long fib(long long n){
	if(n == 1 || n == 2) {
		afib[n] = 1;
		b[n] = true;
		return 1;
	}
	if(b[n]) return afib[n];
	b[n] = true;
	afib[n] = fib(n-1) + afib[n-2];
	return afib[n];
}

int main(){
	return 0;
}

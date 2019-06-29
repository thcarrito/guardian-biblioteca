#include <bits/stdc++.h>

#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

long long modulo(long long n, long long m){
	if(n >= 0)
		return n%m;
	return ((n%m)+m)%m;
}

int main(){
	unsigned long long a = 1;
	long long n;
	unsigned long long m = 1000000007;
	cin >> n;
	forn(i, n-1)
		a = (a*3) % m;
		
    a -= ((n-1)% 2 == 0 ) ? 1 : -1;
    a = modulo(3*a,m);
	a =  a * 250000002;
	
	cout << modulo(a,m) << endl;
	
	return 0;
}


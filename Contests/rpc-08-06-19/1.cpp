#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

#define MAX 10000000000

long long potencia(long long k){
	long long r = 1;
	forn(i,k){
		r = r * 10;
	}
	return r;
}
int main(){
	long long m, n, i = 1;
	n = 1;
	cin >> m;
	if((m % 2 == 0) || (m % 2 == 5)){
		cout << -1<< endl;
		return 0;
	}	
	while((n % m != 0) && i < 15){
		n += potencia(i);
		i++;
	}
	if(n%m == 0)
		cout << i << endl;
	else
		cout << -1<< endl;
	return 0;
}

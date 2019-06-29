#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

typedef long long ll;
using namespace std;

ll expmod(ll b, ll e, ll m){
	if(!e) return 1;
	ll q = expmod(b, e/2, m); q = (q*q) % m;
	return e%2 ? (b*q) % m : q;
}

int main(){
	
	
	long long t, s, x, modulo, modulo2, dif;
	
	cin >> t >> s >> x;
	
	dif =(x-t);
	//modulo = expmod(dif, 1, s);
	//modulo2 = expmod(dif -1, 1, s);
	modulo = dif % s;
	modulo2 = (dif-1) % s;
	if((modulo == 0 || (modulo2 == 0 && (x - t - 1) != 0)) && x >= t){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}

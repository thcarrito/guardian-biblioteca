#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

const int MAXN = 200;
#define MOD 1000000007;

long long comb[MAXN+1][MAXN+2];
long long fact[MAXN+1];

	
void combinatoria(){
	forn(i, MAXN+1){ //comb[i][k]=i tomados de a k
		comb[i][0]=comb[i][i]=1;
		forr(k, 1, i) 
			comb[i][k]=(comb[i-1][k]+comb[i-1][k-1])%MOD;
	}
}


int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int q;
	long long n, p, suma = 0, j;
	fact[0] = 1;
	
	forr(i, 1, MAXN + 1){
		fact[i] = i * fact[i-1];
	}
	
	cin>> q;
	combinatoria();

	forn(i, q){
		cin>> n >> p;
		suma = 0;
		j= 1;
		while(j <= n){
			suma = (suma + comb[p - ((j*(j-1)) / 2) - 1][j-1]) / fact[i];
			j++;
		}
		cout << suma << endl;
	}
	return 0;
}

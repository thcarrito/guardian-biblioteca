#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl
#define endl "\n"

const int MAXP=100100;

int criba[MAXP+1];
int cuenta[MAXP+1];

void crearcriba(){
	int w[] = {4,2,4,2,4,6,2,6};
	for(int p=25;p<=MAXP;p+=10) criba[p]=5;
	for(int p=9;p<=MAXP;p+=6) criba[p]=3; 
	for(int p=4;p<=MAXP;p+=2) criba[p]=2;
	for(int p=7,cur=0;p*p<=MAXP;p+=w[cur++&7]) if (!criba[p]) 
		for(int j=p*p;j<=MAXP;j+=(p<<1)) if(!criba[j]) criba[j]=p;
}

vector<int> primos;

void buscarprimos(){
	crearcriba();
	forr (i,2,MAXP+1) if (!criba[i]) primos.push_back(i);
}

void fact(ll n){ //O (lg n)
	bool set[MAXP+1];
	zero(set);
	while (criba[n]){
		if(!set[criba[n]]){
			cuenta[criba[n]]++;
			set[criba[n]] = 1;
		}
		n/=criba[n];
	}
	if(n>1 && !set[n]) cuenta[n]++;
	return;
}

int main() {
	zero(cuenta);
	buscarprimos();
	ios::sync_with_stdio(0);
    cin.tie(nullptr);
	int n;
	cin >> n;
	int a;
	forn(i,n){
		cin >> a;
		fact(a);
	}
	int max = *max_element(cuenta, cuenta+(MAXP+1));
	max = max ? max : 1; 
	cout << max << endl;
    return 0;
}

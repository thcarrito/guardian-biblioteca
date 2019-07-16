#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_bac
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl
#define endl "\n"

const int MAXN=100100;

ll expmod(ll b, ll e, ll m){
	if(!e) return 1;
	ll q = expmod(b, e/2, m); q = (q*q) % m;
	return e%2 ? (b*q) % m : q;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int T, k=0;
    cin>>T;
    ll a, suma=0, b;
    forn(i, T){
		suma=0;
		k=1;
		cin>> a;
		b = a/5;
		while(b>0){
		suma = suma + b;
		k++;
		b= a / (expmod(5, k, 1000000007));
		}
		cout<< suma<< endl;
    }
	
    
    
    return 0;
}

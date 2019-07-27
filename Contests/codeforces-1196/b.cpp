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
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl

const int MAXN=200100;
int Q,n,k;
ll suma[MAXN];

bool f(int r, int l, int k){
	if(r == n) return ((suma[r] - suma[l]) % 2 != 0 && k == 0);
	if(k == 0) return false;
	bool nt = f(r+1, l, k);
	bool t = false;
	if((suma[r] - suma[l]) % 2 != 0)
		t = f(r+1, r, k-1);
	return t || nt;
}

int main() {
    ios::sync_with_stdio(0);
    cin >> Q;
    forn(q,Q){
		cin >> n >> k;
		ll a;
		zero(suma);
		forn(i,n){
			cin >> a;
			if(i==0) { suma[1] = a; continue; }
			suma[i+1] = suma[i] + a;
		}
		cout << f(1,0,k) << endl;
	}
    return 0;
}

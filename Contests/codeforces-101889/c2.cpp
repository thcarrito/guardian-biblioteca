#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<ll,ll> pll;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define sz(x) ((int)((x).size()))

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k, m;
    cin >> k >> n;
    int x[n];
    int c[k];

    if ((n+1)%k == 0) {m=(n+1)/k;}
    if ((n-1)%k == 0) {m=(n-1)/k;}
    if (n%k == 0) {m=n/k;}
    
    forn(i,k) c[i]=m;
    forn(i,n)
    {
		cin >> x[i];
		c[x[i]-1]--;
    }
    
    int sobra, falta;
    int sobran=0, faltan=0;
    forn (i,k) if (c[i] < 0) {sobra=i+1; sobran++;}
    forn (i,k) if (c[i] > 0) {falta=i+1; faltan++;}
    
    if (sobran == 1 && faltan ==1) cout << "-" << sobra << " +" << falta << endl;
    else if (sobran == 0 && faltan ==1) cout << "+" << falta << endl;
    else if (sobran == 1 && faltan ==0) cout << "-" << sobra << endl;
    else cout << "*";
    
    return 0;
}

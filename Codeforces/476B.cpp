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

const int MAXN=100100;

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(nullptr);
    int k, n, m;
    cin >> n >> m  >> k;
    int c[m+1], count=0, amigues=0;
    forn(i, m+1)
		cin >> c[i];
	forn(j, m){
		count=0;
		forn(i, 21){
			count += ((c[j] >> i) & 1) != ((c[m] >> i) & 1);
		}
		if(count <= k)
			amigues++;
	}
	cout << amigues << endl;
	return 0;
}

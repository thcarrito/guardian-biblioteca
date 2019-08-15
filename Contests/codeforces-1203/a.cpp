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
int p[210];

bool clockwise(int n){
	bool r = true;
	forn(i,n)
		r = (p[i] == (i+1)) && r;
	return r;
}

bool counterclockwise(int n){
	bool r = true;
	int k = 0;
	forn(i,n){
		if(p[i] == n){
			k = i;
			break;
		}
	}		
	forr(i, k, n-1)
		r = r && (p[i] == (p[i+1] + 1));
	if(k == 0) return r;
	r = r && p[k-1] == 1;
	for(int i = k - 1; i > 0; i--)
		r = r && (p[i] == p[i-1] - 1);
	return r;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int Q;
    cin >> Q;
    forn(q,Q){
		int n;
		zero(p);
		cin >> n;
		forn(i, n)
			cin >> p[i];
		if(clockwise(n) || counterclockwise(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		
	}
	return 0;
}

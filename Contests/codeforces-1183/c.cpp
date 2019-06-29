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

const int MAXN=100100;

long long rec(long long k, long long a, long long b, long long n, long long count){
	if(k < 0) return -1;
	if(n == 0) return count;
	if(k - a >= 0){
		return rec(k-a,a,b, n-1, ++count);
	}
	return rec(k-b,a,b,n-1, count);
}

int main() {
    ios::sync_with_stdio(0);
    long long q;
	cin >> q;
	forn(j, q){
		long long k, n, a, b;
		cin >> k >> n >> a >> b;
		cout << rec(k,a,b,n, 0) << endl;
	}
    return 0;
}

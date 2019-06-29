#include <bits/stdc++.h>
#define forr(i,a,b) for( int i=(a); i<(b); i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second

using namespace std;

int main(){
	int n, next, count;	
	cin >> n;
	char c[n][30];
	int x[n];
	forn(i, n){
		cin >> c[i] >> next;
		x.push_back(next);
	}
	next = 0;
	forn(i, n){
		count = 0;
		if( (*next) % 2 == 0){
			forn(j, i){
				if(x[j] == -1)
					count++:
			}
			next = (*next) - ((*next)%(n-i));
			x[next] = -1;
		}
	}
	return 0;
}

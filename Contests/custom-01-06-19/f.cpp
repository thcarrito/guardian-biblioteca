#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

/*
 * 
 * 					a = w[i];
					w[i] = h[i];
					h[i] = a;
*/

int main(){
	long long n, a, M, m;
	cin >> n;
	long long w[n];
	long long h[n];
	forn(i, n){
		cin >> w[i] >> h[i];
		if(i == 0 && w[i] > h[i]){
			a = w[i];
			w[i] = h[i];
			h[i] = a;
		}
		if(i != 0){
			M = max(w[i], h[i]);
			m = min(w[i], h[i]);
			if( M  > h[i-1]){
				h[i] = m;
				w[i] = M;
			}else{
				h[i] = M;
				w[i] = m;
			}
		}
	}
	forn(i,n-1){
		if(h[i] < h[i+1]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;	
}

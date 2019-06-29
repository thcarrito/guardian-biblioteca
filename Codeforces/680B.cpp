#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n, a, crim;
	cin >> n >> a;
	int t[n];
	forr(i, 1, n + 1){
		cin >> t[i];
	}
	int l, r;
	l = a - 1;
	r = n - a;
	int m;
	if(l <= r)
		m = l;
	else
		m = r;
	crim = t[a];
	forr(i, 1, m + 1){
		if(t[a - i] == t[a + i])
			crim = crim + t[a + i] + t[a + i];
	}
	if(l < r){
		forr(i, a + l + 1, n + 1)
			crim = crim + t[i];
	}
	if(r < l){
		forr(i, 1, a - r)
			crim = crim + t[i];
	}
	cout << crim << endl;
	return 0;
}

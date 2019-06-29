#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n,b;
	cin >> n;
	bool a[3000];
	zero(a);
	forn(i, n){
		cin >> b;
		a[b-1] = true;
	}
	forn(i,n){
		if(!a[i]){
			cout << (i+1) << endl;
			return 0;
		}
	}
	return 0;	
}

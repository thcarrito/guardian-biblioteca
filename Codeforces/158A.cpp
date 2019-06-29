#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n,k, min, count = 0;
	cin >> n >> k ;
	int a[n];
	forn(i, n){
		cin >> a[i];
	}
	min = a[k-1];
	forn(i,n)
		if(a[i] >= min && a[i] > 0) count++;
	cout << count << endl;
	return 0;
}

#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	long long n, m;
	long long c;
	long long suma = 0;
	while(cin >> n >> m, n != -1){
		suma = 0;
		forn(i, n){
			cin >> c;
			suma += (n-i) * c * m;
		}
		cout << suma << endl;
	}
	return 0;
}

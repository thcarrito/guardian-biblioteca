#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	long double n, m, a;
	long long cantV, cantH;
	cin >> n >> m >> a;
	cantV = ceil(n / a);
	cantH = ceil(m / a);
	cout << (cantV*cantH) << endl;
	return 0;
}

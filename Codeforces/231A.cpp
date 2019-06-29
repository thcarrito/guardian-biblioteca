#include <bits/stdc++.h>
#define forr(i, a, b) for(int i = a; i<b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n, cont = 0, a, b, c;
	cin >> n;
	forn(i, n){
		cin >> a >> b >> c;
		if(a + b + c >= 2){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}

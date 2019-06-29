#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int w;
	cin >> w;
	if(w % 2 == 0 && w != 2)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}

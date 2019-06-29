#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n, a, g, sa = 0, sg = 0;
	cin >> n;
	char out[n+1];
	forn(i, n){
		cin >> a >> g;
		if(abs(sa - sg + a) <= 500){
			sa += a;
			out[i] = 'A';
		}else{
			sg += g;
			out[i] = 'G';
		}
	}
	out[n] = '\0';
	string s(out);
	if(abs(sa-sg) <= 500)
		cout << s << endl;
	else
		cout << -1 << endl;
	return 0;
}

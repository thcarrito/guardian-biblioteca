#include <bits/stdc++.h>
using namespace std;

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

int main(){
	int n,c=0;
	bool o;
	cin >> n;
	string s;
	forn(i,n){
		cin >> s;
		if(s[0] == 'X')
			o = s[1] == '+';
		else
			o = s[0] == '+';
		c += o ? 1 : -1;
	}
	cout << c << endl;
	return 0;
}

#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memeset(v, 0, sizeof(v))

using namespace std;

int main(){
	string s;
	char c[10000];
	while(cin >> s, s != "-1"){
		cout << s << endl;
		if(s[0] == '\"')
			cout << "hola" <<endl;
	}
	return 0;
}

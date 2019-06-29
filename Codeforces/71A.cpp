#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n, count = 0, j = 0;
	char s[101];
	cin >> n;
	forn(i, n){
		cin >> s;
		j = 0, count = 0;
		while (s[j] != '\0') count++, j++;
		if(count > 10)
			cout << s[0] << count-2 << s[count-1] << endl;
		else
			cout << s << endl;
	}
	return 0;
}

#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int i = 0, j = 0;
	char s[101];
	
	cin >> s;
	while(s[i] != '\0'){
		if(s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' &&
			s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i'){
				if(s[i] < 97) s[i] = s[i] + 32;
				cout << '.'; 
				cout << s[i];
		}
		i++;
	}
	cout << endl;
	return 0;
}

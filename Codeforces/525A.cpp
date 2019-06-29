#include<bits/stdc++.h>
#define forr(i,a,b) for(int i = a; i < b; i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

const int a = 97;
const int z = 122;
const int A = 65;
const int Z = 90;

int main(){
	int n, c = 0;
	cin >> n;
	char s[2*n -2 + 1];
	int l[26] = {0};
	cin >> s;
	forn(i, 2*n-2){
		if(i % 2 == 0) l[s[i] - a]++;
		if(i % 2 != 0){
			if(l[s[i] - A] > 0)
				l[s[i] - A]--;
			else
				c++;
		} 
	}
	cout << c << endl;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i = a; i<b; i++)
#define forn(i,n) forr(i,0,n)

int main(){
	string s;
	cin >> s;
	int n = s.length();
	int count = 1;
	char c = s[0];
	forr(i, 1,n){
		if(c == s[i]) 
			count++;
		else
			count = 1,c=s[i];
		if(count >= 7){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}

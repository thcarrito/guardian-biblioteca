#include<bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

bool isZero(int c[], int n){
	forn(i, n)
		if(c[i] == 0 && i != 0)
			return false;						
	return true;
}


int main(){
	int n, a, p;
	cin >> n;
	int c[n+1];
	zero(c);
	cin >> p;
	forn(i, p)
		cin >> a, c[a]++;
	cin >> p;
	forn(i, p)
		cin >> a, c[a]++;
	if(isZero(c, n+1)){
		cout << "I become the guy." << endl;
	}else{
		cout << "Oh, my keyboard!" << endl;
	}
	return 0;
}



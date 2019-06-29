#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	
	long long x, y;
	
	cin >> x >> y;
	long long copias = 0;
	copias += y -1;
	if(x != 0 && y == 1){
		cout << "NO" << endl;
		return 0;
	}
	if(y == 0){
		cout << "NO" << endl;
		return 0;
	}
	while(x - copias > 0 && y != 1){
		copias += 2;
	}
	
	if(x- copias == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
		
	return 0;
}


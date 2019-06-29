#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){

	long long y, n, k;
	long long count = 0;
	cin >> y >> k >> n;
	
	forr(m, (1+y)/k, n/k+1){
		if(m*k-y >= 1){
			count++;
			cout << (m*k-y) << " ";
		}
	}
	if(count == 0)
		cout << -1 << endl;
	else
		cout << endl;

	return 0;	
}

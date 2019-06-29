#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))


using namespace std;

int main(){
	
	int a, b, c, sum, total;
	
	cin >> a >> b >> c;
	
	total = min((min (a, (b/2))), (c/4));
	
	sum = 7 * total;
	
	
	cout<< ((int) sum) <<endl;
	
	
	
	
	
	
	
	
	return 0;
}

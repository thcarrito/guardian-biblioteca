#include <bits/stdc++.h>

#define forr(i,a,b) for(int i = a; i < b; i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memeset(v,0,sizeof(v))

using namespace std;

int main(){
	long long a, b, x, y, z, totalA, totalB, total=0;
	cin >> a >> b >> x >> y >> z;

	totalA = a - (2*x + y);
	totalB = b - (3*z + y);
	total += ((totalA >= 0) ? 0 : abs(totalA));
	total += ((totalB >= 0) ? 0 : abs(totalB));
	
	cout << total << endl;
	return 0;
}

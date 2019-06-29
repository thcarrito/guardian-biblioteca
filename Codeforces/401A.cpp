#include <bits/stdc++.h>

#define forr(i,a,b) for(int i = a; i < b; i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memeset(v,0,sizeof(v))

using namespace std;

int main(){
	int n, x, buff, count = 0, sum = 0;
	cin >> n >> x;
	forn(i, n)
		cin >> buff, sum += buff;
	while(abs(sum) >= x){
		sum = sum + ((sum >= 0) ? -1*x : x), count++;
	}
	if(abs(sum) > 0 ) count++;
	cout << count << endl;
	return 0;
}

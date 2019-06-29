#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;



int main(){
	
	long long x, y;
	
	while (cin >> x >> y, x != 0 && y != 0){
		if((x+y) % 2 != 0){
		cout<< ((x+y-1)*(x+y-2))/2 + x << endl;
		}else{
			cout<< ((x+y-1)*(x+y-2))/2 + y << endl;
		}
	}

	return 0;
}

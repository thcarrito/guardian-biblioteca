#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){

	int A, B, C, N, sumA, sumB;

	cin >> A >> B >> C >> N ;

	
	sumA = A - C;
	sumB = B - C;
	
	if((A < C) || (B < C)){
		cout << "-1" << endl;
		
	}else{
	
		if((sumA + sumB + C) >= N) cout << "-1" << endl;
		
		if((sumA + sumB + C) < N) cout << N - (C + sumA + sumB) << endl;
	}

	return 0;
}

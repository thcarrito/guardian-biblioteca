#include<bits/stdc++.h>
#define forr(i, a, b) for(i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;


int main(){
	
	int n, v, k, cv, i, j;
	
	cin >> n >> v;
	

	forn(i, n){
		
		cin >> k;
		
		int s[k];
		
		cin >> s[k];
		
		forn (s[j], s[k]){
			
			if(v > s[j]){
				
				cv += cv;
			}break;
		}
		
		
	}

	cout << k << cv << endl;

	
	return 0;
}




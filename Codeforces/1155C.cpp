#include <bits/stdc++.h>
#define forr(i, a, b) for(int i = a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int GCD(int n, int d[]){
	int a = __gcd(d[0], d[1]);
	forr(i, 1, n-1){
		if(__gcd(d[i], d[i+1]) < a)
			a = __gcd(d[i], d[i+1]);
	}
	return a;
}



int main(){
	int n, m , i, j, g, f = 1;
	cin >> n >> m;
	
	int a[n], b[m], c[n-1];
	
	forn(i , n){
		
		cin >> a[i];
	}
	
	forn(i , m){
		
		cin >> b[i];
		
	}
	
	forn(i,n){
		c[i]= a[i+1] - a[i];
	}
	
	g = GCD(n,c);
	
	
	forn(j , m){
		
		if((g % b[j]) == 0){
			
			cout << "YES\n" << a[0] << " " << j+1 << endl;
			
			f = 0;
			
			break;
			
		}
		
	}
	
	if(f == 1){
		
		cout << "NO" << endl;
		
	}
	
	return 0;
}

#include <bits/stdc++.h>
#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

bool comp(int a, int b){
	
	return (a <= b);
}


int main(){
	
	long long n, m;
	long long type, sum1=0, l, r, sum2=0;
	
	cin >> n;
	
	long long a[n], b[n], suma[n]={0}, sumb[n]={0};
	
	forn(i,n){
		
		cin >> a[i];
		
		b[i] = a[i];
		
	}
	
	sort(b, b+n, comp);
	
	forn(i,n){
		
		if(i!= 0){
		
		
			suma[i] = suma[i-1] + a[i];
			sumb[i] = sumb[i-1] + b[i];
			
		}else{
			suma[i] = a[i];
			sumb[i] = b[i];
		}
		//cout << "suma " << i << ": " << suma[i] << endl;
		//cout << "sumb " << i << ": " << sumb[i] << endl;
	}
	
	
	cin >> m;
	
	forn(i, m){
		cin >> type >> l >> r;
		if(type == 1) { // pregunta de tipo 1
			if(l>= 2)
				sum1 = suma[r-1] - suma[l-2];
			else
				sum1 = suma[r-1];
			cout << sum1 << endl;
		}else { //pregunta de tipo 2
			if(l>= 2)
				sum2 = sumb[r-1] - sumb[l-2];
			else
				sum2 = sumb[r-1];
			cout << sum2 << endl;
		}
	}
	


	return 0;
}

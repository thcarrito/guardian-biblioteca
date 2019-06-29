#include<bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	long long n, m, t;
	
	
	cin >> n >> m ;
	int a[m+1];
	a[0]= 1;
	t = 0;
	
	forn(i,m){
		cin >> a[i+1];
	}
	forn(i, m){
		//forma alternativa de hacer esto
		//t += (a[i+1] >= a[i]) ? a[i+1] - a[i] : n - a[i] + a[i+1];
		if(a[i+1] >= a[i]){		
			t = t + a[i+1] - a[i];	
		}else{
			t = t + n - a[i] + a[i+1];
		}
	}
	cout << t << endl;
	
	return 0;
}

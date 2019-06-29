#include <bits/stdc++.h>
#define forr(i, a, b) for(int i = a ; i < b ; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v,0,sizeof(v))

using namespace std; 

bool comp(int a, int b) 
{ 
    return (a > b); 
} 

int main(){
	long long n, k;
	cin >> n >> k;
	long long a[n][2], b[n]; //fi-ti
	forn(i,n){
		cin >> a[i][0] >> a[i][1];
		b[i] = (a[i][1] <= k) ? a[i][0] : a[i][0] - a[i][1] + k;	
	}	
	sort(b, b+n, comp);
	cout << b[0] << endl;		
	return 0;
}


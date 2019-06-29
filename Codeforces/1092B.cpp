#include<bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

bool comp(int a, int b) 
{ 
    return (a > b); 
} 

int main(){
	
	int n;
	
	cin >> n;
	
	int a[n], sum = 0;
	
	forn(i,n){
		
		cin >> a[i];
		 		
	}
	
	sort(a, a+n, comp);
	
	forn(i,n/2){
		
		sum += a[2*i] - a[2*i +1];
	
	}
	
	cout << sum << endl;
	
	return 0;
}

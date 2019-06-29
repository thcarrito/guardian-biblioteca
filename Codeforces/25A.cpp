#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;



int main(){
	
	int n, a[100], i;
	
	cin >> n;
	
	forn(i , n){
		cin >>  a[i];
	}
	
	if(a[0] % 2 == a[1] % 2){
		for(int i=2; i < n; i++){
			if(a[i] % 2 != a[0] % 2){
				cout<< i+1 << endl;
				break;
			}
				
			
		}	
	}else{
		if(a[0] % 2 == a[2] % 2){
		cout << "2" << endl;
		}else{
		cout <<"1" << endl;
		}
		
	}
		
	
	
}

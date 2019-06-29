#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

bool esPrimo(long long n){
	bool isPrime = true;

	  for(int i = 2; i <= n / 2; ++i)
	  {
		  if(n % i == 0)
		  {
			  isPrime = false;
			  break;
		  }
	  }
	  return isPrime;
}

int main(){
	long long n;
	while(cin >> n){
		if(esPrimo(n)){
			cout << 1 << endl;
		}else{
			if(n%2 == 0)
				cout << 2 << endl;
			else{
				if(esPrimo(n-2))
					cout << 2 << endl;
				else 
					cout << 3 << endl;
			}
		}
	}
	return 0;
}  

#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

#define MAX 100000000

bool arrayPrimo[MAX] = {0};
bool arrayPrimo2[MAX] = {0};

bool esPrimo(long long n){
	if ( n < MAX){
		if(arrayPrimo[n])
			return true;
	}
	bool isPrime = true;
  for(int i = 2; i <=  sqrt(n); ++i)
  {
	  if(n % i == 0)
	  {
		  isPrime = false;
		  break;
	  }
  }
  if(isPrime && n < MAX)
	arrayPrimo[n] = true;
  return isPrime;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	long long n;
	while(cin >> n, n != EOF){
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

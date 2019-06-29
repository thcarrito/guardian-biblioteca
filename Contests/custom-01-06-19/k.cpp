#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	
	int n, a, b;
	
	cin>> n >> a >>b;
	
	int c[n];
	
	long long count =0;
	
	forn(i, n)
		cin >> c[i];

	// n par
	if(n%2 == 0){
		forn(i, n/2){
			if(c[i] != c[n-i-1]){
				if(c[i] == 2 && c[n-i-1] == 2){
					
					cout << "im here " << endl;
					count += 2 * min(a,b);
				}
				if(c[i] != 2){
					if(c[n-i-1] == 2)
						count += (c[i] == 0) ? a : b;
					else{
						if(c[i] != c[n-i-1]){
							cout << "-1" << endl;
							return 0;
						}	
					}	
				}
				if(c[n-i-1] != 2){
					if(c[i] == 2)
						count += (c[n-i-1] == 0) ? a : b;
					else{
						if(c[i] != c[n-i-1]){
							cout << "-1" << endl;
							return 0;
						}	
					}	
				}
			}else{
				if(c[i] == 2 && c[n-i-1] == 2){
					count += 2 * min(a,b);
				}
			}
		}
	}else{//n impar
		if(n==1){
			if(c[0] == 2){
				count += min(a,b);
			}
		}
		if(n != 1){
			forn(i, n/2){
				if(c[i] != c[n-i-1]){
					if(c[i] == 2 && c[n-i-1] == 2){
						
						cout << "im here " << endl;
						count += 2 * min(a,b);
					}
					if(c[i] != 2){
						if(c[n-i-1] == 2)
							count += (c[i] == 0) ? a : b;
						else{
							if(c[i] != c[n-i-1]){
								cout << "-1" << endl;
								return 0;
							}	
						}	
					}
					if(c[n-i-1] != 2){
						if(c[i] == 2)
							count += (c[n-i-1] == 0) ? a : b;
						else{
							if(c[i] != c[n-i-1]){
								cout << "-1" << endl;
								return 0;
							}	
						}	
					}
				}else{
					if(c[i] == 2 && c[n-i-1] == 2){
						count += 2 * min(a,b);
					}
				}
			}
			if(c[(n-1)/2] == 2)
				count += min(a,b);
		}	
	}
	cout << count << endl;
	return 0;
}



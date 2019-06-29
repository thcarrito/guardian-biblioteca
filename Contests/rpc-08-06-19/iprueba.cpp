#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

#define MAX 10000000000

const ll MOD = 1e9 + 7; 
  
// Returns modulo exponentiation for two numbers 
// represented as long long int. It is used by 
// powerStrings(). Its complexity is log(n) 
ll powerLL(ll x, ll n) 
{ 
    ll result = 1; 
    while (n) { 
        if (n & 1) 
            result = result * x % MOD; 
        n = n / 2; 
        x = x * x % MOD; 
    } 
    return result; 
} 
  
// Returns modulo exponentiation for two numbers 
// represented as strings. It is used by 
// powerStrings() 
ll powerStrings(string sa, string sb) 
{ 
    // We convert strings to number  
  
    ll a = 0, b = 0; 
  
    // calculating  a % MOD 
    for (int i = 0; i < sa.length(); i++) 
        a = (a * 10 + (sa[i] - '0')) % MOD; 
  
    // calculating  b % (MOD - 1) 
    for (int i = 0; i < sb.length(); i++) 
        b = (b * 10 + (sb[i] - '0')) % (MOD - 1); 
  
    // Now a and b are long long int. We 
    // calculate a^b using modulo exponentiation 
    return powerLL(a, b); 
} 

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	string out_string, m;
	stringstream ss;

	cin >> m;
	if((m % 2 == 0) || (m % 5 == 0)){
		cout << -1<< endl;
		return 0;
	}	
	ss << "1";
	out_string = ss.str();
	while(mod(out_string, m) != 0){
		ss << "1";
		out_string = ss.str();
		cout << out_string << endl;
		cout << out_string.length() << endl;
		cout << mod(out_string, m) << endl;
	}
	if(mod(out_string, m) == 0)
		cout << out_string.length() << endl;
	else
		cout << -1<< endl;
	return 0;
}

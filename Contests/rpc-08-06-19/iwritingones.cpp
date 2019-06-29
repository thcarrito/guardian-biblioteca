#include<bits/stdc++.h>
#define forr(i,a,b) for(int i=a; i<b; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

#define MAX 10000000000

long long mod(string num, int a) 
{ 
    long long res = 0; 
  
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (long long)num[i] - '0') %a; 
  
    return res; 
} 

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	
	string out_string;
	stringstream ss;

	long long m;
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
	}
	if(mod(out_string, m) == 0)
		cout << out_string.length() << endl;
	else
		cout << -1<< endl;
	return 0;
}

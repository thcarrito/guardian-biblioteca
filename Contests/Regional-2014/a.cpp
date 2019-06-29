#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define dprint(v) cout << #v"=" << v << endl //;)

const int MAXN=100100;
bool x[10];
int n;

int main() {
	int count = 0;
	bool r = true;
	string s;
    freopen("a.in", "r", stdin);
    ios::sync_with_stdio(0);
    while(cin >> n){
    	x[count] = n;
    	count++;
    	if(count == 10){
    		count = 0;
    		forn(i, 5){
    			r = r && (x[i] == (!x[i+5]));
			}
			s = (r) ? "Y" : "N";
			cout << s << endl; 
			r = true;
		}	
	}
    return 0;
}

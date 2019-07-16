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
#define dprint(v) cout << #v"=" << v << endl
#define endl "\n"

const int MAXN=100100;

bool comp(ll a, ll b){
	
	return (a <= b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    int k, m;
    cin>>n;
    forn(z, n){
		cin >> m >> k;
		ll p[m];
		ll sum=0, a, buff=0, j=0;		
		forn(i, m)
			cin >> p[i];
		
		forn(i, m)
			sum += p[i];
		
		a = sum/k;
		buff=p[j];
		j++;
		cout << p[0] << " ";
		while(k>0){
			if(abs(a - (buff+p[j])) <= abs(a - buff)){
				cout << p[j] << " ";
				buff +=  p[j];			
				j++;
			}else{
				k--;
				if(k!=0)
					cout << "/ ";
				else{
					while(j<m){
						cout << p[j] << " ";
						j++;
					}
				}
				buff=0;
			}
		}
		cout << endl;
	}

 
    return 0;
}

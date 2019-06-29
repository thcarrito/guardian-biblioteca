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

const int MAXN=100100;

bool comp(long long a, long long b){
	return a < b;
}

int media(long long *a, long long n){
	long long count = 0;
	forn(i, 5)
		count += *(a+i);
	return ((long long)count/n);
}

int main() {
    ios::sync_with_stdio(0);
    int q;
    cin >> q;
    forn(j,q){
		long long k, n;
		cin >> n >> k;
		long long prices[n];
		forn(i, n){
			cin >> prices[i];
		}
		sort(prices, prices+n, comp);
		long long maxDif = k;
		forn(i, n){
			while(abs(prices[i] - (maxDif +prices[i])) > k && maxDif > 0) maxDif--;
			//cout << maxDif << endl;
			if(maxDif == 0)
				break;
		}
		if(maxDif == 0){
			cout << -1 << endl;
		}else{
			if( n == 1){
				cout << maxDif + prices[0] << endl;
			}else{
				long long m1 = min(prices[0]+maxDif,prices[0]-maxDif);
				long long m2 = max(prices[0]+maxDif,prices[0]-maxDif);
				long long m3 = min(prices[1]+maxDif,prices[1]-maxDif);
				long long m4 = max(prices[1]+maxDif,prices[1]-maxDif);
				long long mm = min(m2,m3);
				lon
				
				//cout << maxDif << endl;
				if(mm <= MM)
					cout << maxDif + prices[0] << endl;
				else
					cout << -1 << endl;
			}
			
		}
		
	}
    return 0;
}

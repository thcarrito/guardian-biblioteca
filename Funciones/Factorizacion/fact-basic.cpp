#include <bits/stdc++.h>
using namespace std;
#define dprint(v) cerr << #v"=" << v << endl //;)
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<int,int> ii;

vector<ll> factorize(ll m){
  if(m==1) return{};
  vector<ll> fact;
  for(ll a=2; a*a<=m; a++){
    while(m%a==0){
      //assert(is_prime(a)); (agrega en log m)
      fact.push_back(a);
      m/=a;
    }
  }
  if(m!=1) fact.push_back(m);
  return fact;
}



int main() {
	return 0;
}

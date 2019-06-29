#include <bits/stdc++.h>
#include<tuple>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<ll,ll> pll;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define sz(x) ((int)((x).size()))

vector< tuple<int, int, int> > tiras;
vector< tuple<int, int, int> >::iterator it;
int l,c,n,p,x,a,b,w,z;
int s,l2, m11, m22, m1, m2;
int colores[100000];

int main() {
    
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("dinput","r",stdin);
    //freopen("output","w",stdout);
    
    cin >> l >> c >> n;
    tiras.pb( tuple<int, int, int>(0,0,l-1) );
    zero(colores);
    colores[0] = l;
    forn(i, n)
    {
		cin >> p >> x >> a >> b;
		s = colores[p-1]%l;
		a = a%l;
		b = b%l;
		s = (s+l2)%l-l2;
		m1 = (a+s*s)%l;
		s = (s+b);
		s = (s+l2)%l-l2;
		m2 = (a+s*s)%l;
		m11 = min(m1, m2);
		m22 = max(m1, m2);
        for(it = tiras.begin(); it != tiras.end(); it++)
        {
        	w = get<1>(*it);
        	z = get<2>(*it);
			if(w < m11 && m11 <= z && z<= m22){
				colores[get<0>(*it)] -= z - m11 + 1;
				get<2>(*it) = m11 - 1; 	
			}

			if(m11 <= w && w <= m22 && m22<z){
				get<1>(*it) = m22 + 1; 
				colores[get<0>(*it)] -= m22 - w + 1;
			}
			if(w < m11 && m2 < z){
				get<2>(*it) = m11 - 1;
				colores[get<0>(*it)] -= m22 - m11 + 1;
				tiras.pb(tuple<int,int,int>(get<0>(*it), m22 +1, z)); 
			}
			if(m11 <= w && z <= m22 ){
				colores[get<0>(*it)] -= z - w + 1;
				tiras.erase(it);
			}
				
        }
        tiras.pb(tuple<int,int,int>(x-1, m11, m22)); 
        colores[x-1] += m22 - m11 + 1;
    }
    forn(i, c)
    	cout << colores[i] << endl;
	//cout << *max_element(colores, colores + c) << endl;
	return 0;
}

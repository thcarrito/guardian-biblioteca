#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
typedef long long ll;
typedef pair<ll, ll> pll;
#define dforn(i,n) for(int i=n-1; i>=0; i--)
#define sz(x) ((int)((x).size()))

string x;
int n = 0, m;
string re[50];

int par(string s)
{
	if (s.length() == 1)
		return (int)s[0] - 48;
	return ((int)s[0] - 48) * 10 + ((int)s[1] - 48);
}

bool f(int p, bool u[], int i) //puedo llegar aca? (estoy en la posicion p y ya use u)
{
	bool r = true;
	if (p >= m)
	{
		forn(i, n) r = u[i] && r;
		return r;
	}
	if (p < m) {
		if (!u[par(x.substr(p, 1)) - 1] && par(x.substr(p, 1)) != 0)
		{
			re[i] = x.substr(p, 1);
			i++;
			u[par(x.substr(p, 1)) - 1] = 1;
			return f(p + 1, u, i);
		}
	}
	if (p < m - 1) {
		if (!u[par(x.substr(p, 2)) - 1] && par(x.substr(p, 1)) != 0)
		{
			re[i] = x.substr(p, 2);
			i++;
			u[par(x.substr(p, 2)) - 1] = 1;
			return f(p + 2, u, i);
		}
	}

	return false;
}

int main()
{
	freopen("joke.in", "r", stdin);
	freopen("joke.out", "w", stdout);
	cin >> x;
	m = x.length();
	if (m < 10) n = m;
	else n = (m + 9) / 2;
	bool u[50];
	zero(u);
	(f(0, u, 0));
	forn(i, n) cout << re[i] << " ";
	cout << endl;
	return 0;
}

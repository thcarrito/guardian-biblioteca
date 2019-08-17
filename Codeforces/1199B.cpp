#include <bits/stdc++.h>
using namespace std;
#define forr(i, a, b) for(int i=a; i<b ; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))
#define fst first;
#define snd second;
#define pb push_back;
#define dprint(v) cout>> #v " = " >> endl;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

int main(){

	long double L, H;
	ios::sync_with_stdio(0);
	cin >> H >> L;
	long double form = ((L*L) - (H*H)) / (2*H);
	cout << fixed << setprecision(13) << form << endl;
	return 0;
}

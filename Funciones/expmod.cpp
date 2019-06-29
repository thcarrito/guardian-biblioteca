#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = 0; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))
typedef long long ll;
using namespace std;

/* expmod : ll ll ll -> ll
 * Calcula el modulo (m) de un numero de la forma x^n
 * Puede calcular modulos muy grandes 
 * ya que aplica el modulo en cada multiplicación
 */
 
ll expmod(ll b, ll e, ll m){
	if(!e) return 1;
	ll q = expmod(b, e/2, m); q = (q*q) % m;
	return e%2 ? (b*q) % m : q;
}
int main(){
	cout << expmod(12, 100, 10) << endl;
	return 0;
}

#include <bits/stdc++.h>

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))
#define dprint(v) cout << #v"=" << v << endl

using namespace std;

int pMayor(int *r, int n){
	int m = *r;
	int pos = 0;
	forn(i,n){
		if(*(r+i) > m){
			m = *(r+i);
			pos = i;
		}
	}
	return pos;
}

int pMenor(int *r, int n){
	int m = *r;
	int pos = 0;
	forn(i,n){
		if(*(r+i) < m){
			m = *(r+i);
			pos = i;
		}
	}
	return pos;
}

int main() {
	
	//Obtener la entrada
	int k,n;
	cin >> k >> n;
	int s[n];
	int c[k];
	int m[n];
	zero(c);
	zero(m);
	forn(i,n){
		cin >> s[i];
		c[s[i] - 1]++; // cuenta cada numero en 'c'
	}
	forn(i,k){
		m[c[i]]++; // La frecuencia de cada cuenta
	}	
	
	//Obtener la posicion del mayor, del segundo y del tercer mayor
	int x1 = pMayor(m,n);
	int backup = m[x1];
	m[x1] = -1;
	int x2 = pMayor(m,n);
	int backup2 = m[x2];
	m[x2] = -1;
	int x3 = pMayor(m,n);
	m[x1] = backup;
	m[x2] = backup2;
	////////////////////
	
	if(!(k >= n+2) && m[x1] != m[x2]){
		int a = m[x1], b = m[x2], d = m[x3], sumaModa = 0;
		forn(i,n){
			sumaModa += m[i];
		}
		if((sumaModa - a) == 1 && b == 1 && x1 == x2 + 1){
			cout << "+" << pMenor(c, k) + 1 << endl;
		}else if((sumaModa - a) == 1 && b == 1 && x1 == x2 - 1){
			cout << "-" << pMayor(c, k) + 1 << endl;
		}else if((sumaModa - a) == 2 && b == 1 && d == 1){
			cout << "-" << pMayor(c, k) + 1 << " " << "+" << pMenor(c, k) + 1 << endl;
		}else{
			cout << "*" << endl;
		}
	}else if(m[x1] == m[x2] && m[x1] == m[x3] && m[x1] == 1 && !(k >= n+2)){
		cout << "-" << pMayor(c, k) + 1  << " " << "+" << pMenor(c, k) + 1 << endl;	
	}else{
		cout << "*" << endl;
	}
    return 0;
}

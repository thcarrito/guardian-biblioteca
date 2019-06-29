#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=(a); i<(b); i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	freopen("1039.in", "r", stdin);
	freopen("1039.out", "w", stdout);
	float raiz;
	int r1, x1, y1, r2, x2, y2;
	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
		raiz = sqrt((pow((x1-x2), 2))+ (pow((y1-y2), 2)));
			
			if((raiz+r2)<= r1){
				cout << "RICO" << endl;
			}else{
				cout << "MORTO" << endl;
			}
	}
	return 0;
}

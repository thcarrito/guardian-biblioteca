#include <bits/stdc++.h>

#define forr(i,a,b) for(int i = a; i < b; i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

void hay6o7(int a, int b, int c){
	int x[] = {a,b,c};
	bool r6 = false;
	bool r7 = false;
	forn(i,3){
		if(x[i] == 6)
			r6 = true;
		if(x[i] == 7)
			r7 = true;
	}
	if(r6 && r7){
		cout << 0 << endl;
	}else{
		if(r7)
			cout << 6 << endl;
		if(r6)
			cout << 7 << endl;
		if(!r6 && !r7)
			cout << 7 << endl;
	}
}

int main(){
	int a,b,c;
	string palo1, palo2, palo3;
	while(cin >> a, a != -1){
		bool paso = false;
		cin >> palo1 >> b >> palo2 >> c >> palo3;
		if(palo1 != palo2 && palo1 != palo3 && palo3 != palo2){
			if(a != 7 && b !=7 && c != 7){
				cout << 7 << endl;
				paso = true;
			}else{
				cout << 6 << endl;
				paso = true;
			}
		}
		if(palo1 == palo2 && palo1 == palo3 && !paso){
			hay6o7(a,b,c);
			paso = true;
		}
		if(palo1 == palo2 && !paso){
			if(c+20 > a+b+20)
				cout << 10 << endl;
			else
				hay6o7(a,b,0);
			paso = true;
		}
		if(palo1 == palo3 && !paso){
			if(b+20 > a+27 && b+20 > c+27)
				cout << 10 << endl;
			else
				hay6o7(a,0,c);
			paso = true;
		}
		if(palo3 == palo2 && !paso){
			if(a+20 > c+b+20)
				cout << 10 << endl;
			else
				hay6o7(0,b,c);
			paso = true;
		}
	}
	return 0;
}

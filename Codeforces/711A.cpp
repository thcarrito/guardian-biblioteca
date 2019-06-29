#include <bits/stdc++.h>
#define forr(i, a, b) for(int i=a ; i<b ; i++)
#define forn(i,n) forr(i, 0, n)
#define zero(v) memset (v, 0, sizeof(v))

using namespace std;

char c[1000][50];

int isO(int j){
	int i;
	forn(i, 5){
		
		if(c[j][i] == 'O' && c[j][i+1] == 'O'){
			if(i==0)
				return 1;
			else
				return 2;
		}
	}	
	return 0;
}


int main(){
	int i, n, a;
	bool r = false;
	char s[50];
	cin >> n;
	
	forn(i, n){
		cin >> s;
		forn(j, 5){
			c[i][j] = (*(s+j));
		}
	}
	forn(i,n){
		a = isO(i);
		if(a == 1){
			c[i][0] = '+'; c[i][1] = '+';
			r = true;
			break;
		}else if(a == 2){
			c[i][3] = '+'; c[i][4] = '+';
			r = true;
			break;
		}
	}
	if(r){
		cout << "YES" << endl;
		forn(i,n)
			cout << c[i] << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

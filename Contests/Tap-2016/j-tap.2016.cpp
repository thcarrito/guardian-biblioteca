#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
	return a>b;
}

int main (){
	long int	 n,l,c;
	long int	 k;
	bool r;
	while(cin >> n >> l >> c){
		k = 0;
		r = true;
		long int pruebas[n];
		for(int i = 0; i < n; i++){
		cin >> pruebas[i];
		}
		sort(pruebas, pruebas + n, comp);
		while(k < n && r){
			//cout << pruebas[k] << " " << c;
			if(pruebas[k]<= c ){
				c -=pruebas[k];
				k += l;
			}else{
				r = false;
			}				
		}
		if(r)
			cout << 'S' << endl;
		else
			cout << 'N' << endl;
	}

	return 0;
}

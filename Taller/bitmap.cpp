#include <bits/stdc++.h>

#define forr(i, a, b) for(int i = a; i < b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

vector<int> BFS(vector<vector<int> > &lista, int nodoInicial){
	int n = lista.size(),t;
	queue<int> cola;
	vector<int> distancias(n,n);
	cola.push(nodoInicial);
	distancias[nodoInicial] = 0;
	while(!cola.empty()){
		t= cola.front();
		cola.pop();
		forn(i, (int)lista[t].size()){
			if(distancias[lista[t][i]] == n){
				distancias[lista[t][i]] = distancias[t]+1;
				cola.push(lista[t][i]);
			}
		}
	}
	return distancias;
}


int main(){
	vector< vector<int> > lista;
	int t,n,m,b;
	cin >> t;
	forn(k, t){
		cin >> n >> m;
		forn(i,n){
			vector<int> a;
			forn(j,m){
				cin >> b;
				 a.push_back(b);
			}
			lista.push_back(a);
		}
		for(int j = 0; j < n*m; j++){
			vector<int> distancias = BFS(lista, j);
			forn(i, (int)distancias.size()){
				cout << distancias[i] << " ";
				cout << endl;
			}
		}
		
	}
	return 0;
}

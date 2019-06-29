#include<bits/stdc++.h>
#define forr(i, a, b) for(int i=a; i<b; i++)
#define forn(i, n) forr(i, 0, n)
#define zero(v) memset(v, 0, sizeof(v))

using namespace std;

int main(){
	int n, k = 0;
	long long xi, yi, xj, yj, p[100][2], contador = 0;
	bool flag;
	double aux, b, c;
	//vector<pair<double, double>> parabolas;
	set <pair<double, double>> parabolas;
	cin >> n;
	//double parabolas[4950][2];
	forn(i, n)
		 cin >> p[i][0] >> p[i][1];
	forn(i, n){
		
		for(int j = (i+1); j < n; j++){
			flag = true;
			//cout << "i " << i << " j " << j << endl;
			xi = p[i][0]; yi = p[i][1]; xj = p[j][0]; yj = p[j][1];
			if((xj-xi) != 0)
				c = (yi*xj-xi*xi*xj-yj*xi+xj*xj*xi)/(xj-xi);
			else
				flag = false;
			if(xi != 0)
				b = (yi-xi*xi-c)/xi;
			else
				b = (yj-xj*xj-c)/xj;
			/*if(flag){
				parabolas[k][0] = b;
				parabolas[k][1] = c;
				k++;
			}*/
			if(flag)
				parabolas.insert(make_pair(b,c));
		}
	}
	/*forn(i, k){
		cout << "b: " << parabolas[i][0] << " c: " << parabolas[i][1] << endl;
	}
	for(auto itr = parabolas.begin(); itr != parabolas.end(); itr++) { 
		cout << "b: " << (*itr).first << " c: " << (*itr).second << endl;
	}*/
	for(auto itr = parabolas.begin(); itr != parabolas.end(); itr++) { 
		flag = true;
		forn(i,n){
			aux = p[i][0]*p[i][0] + (*itr).first*p[i][0] + (*itr).second; 
			flag = flag && p[i][1] <= aux;
		}
		contador += (flag) ? 1 : 0;
	}
	/*forn(i, k){
		flag = true;
		forn(j,n){
            aux = p[j][0]*p[j][0] + parabolas[i][0]*p[j][0] + parabolas[i][1]; 
			flag = flag && p[j][1] <= aux;
		}
		contador += (flag) ? 1 : 0;
	}*/
	cout << contador << endl;
	return 0;
}

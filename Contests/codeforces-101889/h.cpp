#include <bits/stdc++.h>
using namespace std;


int tienesiete(int u){
	int g;
	g = u%10;
	if(u%7 == 0){
		return 1;
	}
	while (u > 0)
	{
		g=u%10;
		if(u%10 == 7){
			return 1;
		}
		else{
			u = (u-g)/10;
			}
	}
	return 0;
	}


// n cant personas, m persona elegida, j cant filas que pide
//imprime la serie de la persona m

int serie(int n, int m, int k){

	int i = 1, cuentak = 0, a;
	 
	while (cuentak < k)
	{
	
	
			//columnas distintas de uno y de n
			if(m != 1 && m != n)
			{
				
				if(i % 2 == 0)
					a = i*(n-1) - (m-2);
				else
					a = (i-1)*(n-1) + m;
		}else if(m == 1 )     //columna de 1
		{
			if(i % 2 == 0) 
			{
				a = i*(n-1) + 1;
			}
			else
			{
				if(i == 1){
					a = 1;
			}	else
			{
				a = -1;
					}
			}
				
		}else if(m == n){   //columna de n
				
			if(i % 2 == 0)
					a = -1;
			else
				a = i*(n-1) +1;
		}
		
		if(a != -1)
			cuentak += tienesiete(a);
		i++;
	}
	
	return a;
}


int main(){
	
	int n, m, k;
	
	while(cin >> n >> m >> k, n != 0 && m!= 0 && k!= 0){
		
		cout<< serie(n,m,k) << endl;
	}
	
	
	
	
	
	return 0;
}

#include <bits/stdc++.h>

#define forr(i,a,b) for(int i=(a); i<(b); i++)
#define forn(i,n) forr(i,0,n)
#define zero(v) memset(v, 0, sizeof(v))
#define dprint(v) cout << #v"=" << v << endl
#define V 100


int anterior, actual;

using namespace std;

int compVert(int x, int y, int n){
	return ((n*(y-1))+(x-1));
}

int VertCompY(int v, int n){
	return (((int)v/n) +1);
}

int VertCompX(int v, int n){
	return (v%n +1);
}

int minDistance(int dist[], bool sptSet[], int src, int n){
	int min = INT_MAX, min_index;
	if(anterior != src && actual != src){
		int izq, der;
		if(abs(anterior-actual) == 1){
			izq = actual+n;
			der = actual-n;
		}else{
			izq = actual + 1;
			der = actual - 1;
		}
		forn(v, V){
			if(v != izq && v != der)
				dist[v] = INT_MAX;
		}
	}
	forn(v, V){
		if(sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;
	}
	return min_index;
}

int printSolution(int dist[], int n) 
{ 
   printf("Vertex   Distance from Source\n"); 
   for (int i = 0; i < V; i++) 
      printf("%d \t %d\n", i, dist[i]); 
} 

void dijkstra(int graph[V][V], int src, int n){
	int dist[V];
	bool sptSet[V];
	
	forn(i, V){
		dist[i] = INT_MAX, sptSet[i] = false;
	}
	dist[src] = 0;
	anterior = src;
	actual = src;
	for(int count = 0; count < V-1; count++){
		int u = minDistance(dist, sptSet, src, n);
		sptSet[u] = true;
		anterior = actual;
		actual = u;
		forn(v, V){
			if(!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u]+graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
		}
	}
	printSolution(dist, V);
}

int main() 
{ 
	int n, a, ax, ay, bx, by;
	cin >> n;
	int graph[V][V];
	zero(graph);
	forn(i, n-1){
		cin >> a;
		for(int j = i*n; j < (n*i + n); j++){
			graph[j][j+n] = a;
			graph[j+n][j] = a;
		}	
	}
	forn(i, n-1){
		cin >> a;
		for(int j = i; j < n*n; j = j+n){
			graph[j][j+1] = a;
			graph[j+1][j] = a;
		}	
	}
	
	cin >> ax >> ay >> bx >> by;
	/*forn(i, n*n){
		forn(j, n*n){
			cout << graph[j][i] << "\t";
		}
		cout << endl;
	}*/
	dijkstra(graph, compVert(ax,ay,n), n);
	cout << "La distancia a: " <<  compVert(bx,by,n) << endl;
   
    return 0; 
} 

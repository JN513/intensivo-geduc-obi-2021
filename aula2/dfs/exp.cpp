#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define MAXN 50050

using namespace std;

int n, m;
int componente[MAXN];
vector<int> lista[MAXN];

void DFS(int x){ // vértice com o qual vamos trabalhar
	
	// usaremos lista de adjacência
	for(int i = 0;i < (int)vizinhos[x].size();i++){ // para todo V vizinho a X
		
		int v = vizinhos[x][i];
		
		if(componente[v] == -1){
			componente[v] = componente[x];
			DFS(v);
		}
	}
}

int main(void){

    return 0;
}
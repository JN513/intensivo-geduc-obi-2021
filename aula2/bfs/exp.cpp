#include <bits/stdc++.h>

#define ll long long int
#define nl endl
#define oo 10000000000000000000

using namespace std;

//bfs vector <int> grafo[NMAX];

void BFS(int x){
	
	queue<int> fila;
	fila.push(x); // fila da nossa BFS
	
	componente[x] = valor; // colocamos o valor adequado aqui
	
	int atual = 0; // atual posição que estamos na fila
	
	while(!fila.empty()){ // Enquanto a fila não for vazia
		
		// vamos trabalhar com o primeiro da fila
		int v = fila.front();
		fila.pop(); // para movermos o elemento da fila
		
		for(int i = 0;i < (int)vizinhos[v].size();i++){
			
			int u = vizinhos[v][i];
			
			if(componente[u] == -1){
				
				// se u ainda não tiver sido visitado, o acrescentamos a fila
				componente[u] = componente[v];
				fila.push(u);
			}
		}
	}
}

//
//
//

int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};

void bfs(int x, int y){ // matriz
    queue < pair<int,int> > fila;

    fila.push({x,y});

    while(!fila.empty()){

        x = fila.front().first;
        y = fila.front().second;

        fila.pop();

        for (int k = 0; k < 4; k++){
            int xi = x+dirx[k];
            int xj = y+diry[k];
            if (verifica(xi,xj) && dist[xi][xj] == oo && grid[xi][xj] == 1){
                dist[xi][xj] = dist[x][y] + 1;
                fila.push({xi,xj});
            }
        }
    }
}

int main(void){

    return 0;
}
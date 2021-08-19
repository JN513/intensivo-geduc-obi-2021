// Exercicio: Taligado - Neps Academy -  https://neps.academy/br/exercise/289

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n, m;

vector <int> v[100005];

bool verifica(int x, int y) {
    for (int i = 0; i < v[x].size(); i++) {
        if (v[x][i] == y) return true;
    }

    return false;
}

int main(void){
    
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b, c;

        cin >> a >> b >> c;

        if(a == 1){
            v[b].push_back(c);
            v[c].push_back(b);
        } else {
            if(verifica(b, c)){
                cout << 1 << nl;
            } else {
                cout << 0 << nl;
            }
        }
    }

    return 0;
}
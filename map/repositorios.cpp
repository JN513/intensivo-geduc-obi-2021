// Exercicio: Repositorios - Neps Academy - https://neps.academy/br/exercise/277

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, m; // N = numero de programas instalados, M = numero de versões na net

    cin >> n >> m; // leitura dos valores

    map <int, int> softs; // map dos softwares instalados
    map <int, int> res; // map dos softwares que serão atualizados

    for(int i = 0, a, b; i < n; i++){ // leitura dos softwares instalados
        cin >> a >> b; // leitura dos valores
        softs[a] = b; // insere o software no map (chave, valor) software a tera versão b
    }

    for(int i = 0, a, b; i < m; i++){ // leitura dos softwares que serão atualizados
        cin >> a >> b; // leitura dos valores

        if(softs.find(a) != softs.end()){ // se o software a estiver instalado
            if(softs[a] < b) res[a] = max(b, res[a]); // se a versão do software a for menor que a versão b, atualiza a versão do software a
        }
        else res[a] = b; // senão, insere o software a com a versão b
    }

    for (map<int,int>::iterator it=res.begin(); it!=res.end(); ++it){ // percorre o map res
        cout << it->first<< " "<< it->second<< "\n"; // imprime o software a com a versão b
    }

    return 0;
}
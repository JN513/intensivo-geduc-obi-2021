// Exercicio: Times - Neps Academy - https://neps.academy/br/exercise/253

#include <bits/stdc++.h> // Biblioteca com todas as funções do C++

#define nl endl // Define a quebra de linha

using namespace std; // Usa a Biblioteca Padrão

int n, m; // n: numero de alunos, m: numero de times
vector<pair<string, int>> v; // Alunos e nivel de abilidade

vector<string> t[1002]; // Times

int main(void){
    cin >> n >> m; // Número de alunos e número de times

    for(int i =0; i < n; i++){ // Leitura dos alunos
        string s; // Nome do aluno
        int x; // Nivel de abilidade

        cin >> s >> x; // Leitura do nome e nivel de abilidade
        v.push_back({s,x}); // Adiciona o aluno na lista
        //v.push_back(make_pair(s,x)); // Adiciona o aluno na lista
    }

    int v[100];


    sort(v.begin(), v.end(), [](pair<string, int> a, pair<string, int> b){ // Ordena os alunos por nivel de abilidade
        return a.second > b.second; // Ordena os alunos por nivel de abilidade
    });

    int time = 0; // Contador de times

    for(int i = 0; i < v.size(); i++){  
        t[time].push_back(v[i].first);  
        time ++; // Inclementa o contador de times
        if(time == m) time = 0; // Se o contador de times for igual ao numero de times, volta para o primeiro time
    }

    for(int i = 0; i < m; i++){ // Imprime os times
        cout << "Time "<<i+1 << nl; // Imprime o numero do time
        sort(t[i].begin(), t[i].end()); // Ordena os alunos do time

        for(string s: t[i])cout << s << nl; // Imprime os alunos do time
        cout << nl; // Imprime uma linha em branco
    }

    return 0;
}
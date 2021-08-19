// Exercicio: Troca de Cartas - Neps Academy - https://neps.academy/br/exercise/252

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int main(void){
    int n, m, r = 0;

    set <int> a, b;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        b.insert(x);
    }

    if(a.size() > b.size()){
        for(auto it = b.begin(); it != b.end(); it++){
            int t = a.size();

            a.insert(*it);
            if(a.size() > t) r++;
        }
    } else {
        for(auto it = a.begin(); it != a.end(); it++){
            int t = b.size();

            b.insert(*it);
            if(b.size() > t) r++;
        }
    }

    cout << r << nl;

    return 0;
}
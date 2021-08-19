// Exercicios: Chaves - Neps Academy - https://neps.academy/br/exercise/56

#include <bits/stdc++.h>

#define ll long long int
#define nl endl

using namespace std;

int n;

int main(void){
    cin >> n;

    string s;

    cin.ignore();

    stack<char> st;

    bool ok = true;

    for(int i = 0; i < n; i++){
        getline(cin, s);

        for(int j = 0; j < (int)s.size(); j++){
            if(s[j] == '{'){
                st.push(s[j]);
            }

            else if(s[j] == '}'){
                if(st.empty()){
                    ok = false;
                    continue;
                }

                st.pop();
            }
        }
    }

    cout << (ok && st.empty() ? "YES" : "NO") << nl;

    if(st.empty() && ok){
        cout << "S" << nl;
    } else {
        cout << "N" << nl;
    }


    return 0;
}
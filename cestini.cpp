#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(int t) {
    int N, M, Q;
    cin >> N >> M >> Q;

    string s;
    cin >> s;

    // Aggiungi codice se vuoi

    string ans;

    vector<vector<char>>v(M);
char c;
int n1,n2;
    for(int i=0;i<N;i++)
        v[0].push_back(s[i]);

    for(int i=0;i<Q;i++){
        cin>>c>>n1>>n2;
        if(c=='s'){
            char temp;
            temp=v[n1].back();
            v[n1].pop_back();
            v[n2].push_back(temp);
        }
        else if(c=='c'){
            ans+=v[n1][n2];
        }
    }


    cout << "Case #" << t << ": " << ans << endl;
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

     freopen("cestini_input_1.txt", "r", stdin);
     freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}
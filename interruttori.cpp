#include <bits/stdc++.h>
using namespace std;

void solve(int t){
int N,A,B;
    cin>>N>>A>>B;
vector<int>dist(N,-1);
vector<vector<int>>adj(N);
queue<int>Q;
    for(int i=0;i<A;i++){ //inserisco nella coda le lampadine collegate a un interruttore di tipo 0, 
        int x;            //dato che il numero di interruttori massimo da premere equivale alla 
        cin>>x;           //distanza minima tra una lampadina e un'altra lampadina collegata a un interruttore di tipo 0 +1
        dist[x]=1;
        Q.push(x);
    }
    for(int i=0;i<B;i++){ //creo la lista di adiacenza
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
 
    while(!Q.empty()){ //BFS
        int node=Q.front();
        Q.pop();
        for (auto n:adj[node]) {
            if(dist[n]==-1){
                dist[n]=dist[node]+1;
                Q.push(n);
            }
        }
    }
    int index=max_element(dist.begin(),dist.end())-dist.begin(); //ottengo l'indice dell'elemento massimo
    cout<<"Case #"<<t<<": "<<index<<' '<<dist[index]<<'\n';
}

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
freopen("interruttori_input_2.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int T;
    cin>>T;
    for(int t=1;t<=T;t++)
        solve(t);

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(int t) {
    int N,K;
    cin>>N>>K;
    vector<int>v(N);

    for (int i=0;i<N;i++) 
        cin>>v[i];
    sort(v.begin(),v.end());

    vector<int>v2(N-1);
    for (int i=0;i<N-1;i++)
        v2[i]=v[i]-v[i+1];
    sort(v2.begin(),v2.end());

    int ans=v[N-1]-v[0];
    for (int i=0;i<K-1;i++)
        ans+=v2[i];

    cout<<"Case #"<<t<<": "<<ans<<"\n";
}

int main() {
freopen("collezionismo_input_4.txt","r",stdin);
freopen("output.txt","w",stdout);
    int T;
    cin>>T;
    for (int i=1;i<=T;i++) 
        solve(i);

    return 0;
}
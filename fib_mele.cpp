#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
//freopen("output.txt","w",stdout);
int N,M,C,n;
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>N>>M>>C;
    if(N*M>=C)
        cout<<"Case #"<<i<<":"<<C<<endl;
    else
        cout<<"Case #"<<i<<":"<<N*M<<endl;
    }
    return 0;
}
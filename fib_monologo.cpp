#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
freopen("output.txt","w",stdout);
int N,K,ans,temp;
vector<int>carotei(100);
vector<int>carotef(100);
    cin>>N;
    for(int i=1;i<=N;i++){
        ans=0;
        cin>>K;
        for(int j=0;j<K;j++){
            cin>>temp;
            carotei[j]=temp;
        }
        for(int j=0;j<K;j++){
            cin>>temp;
            carotef[j]=temp;
        }
        for(int j=0;j<K;j++){
            if(carotef[j]<carotei[j])
                ans++;
        }
        cout<<"Case #"<<i<<":"<<ans<<endl;
    }
    return 0;
}
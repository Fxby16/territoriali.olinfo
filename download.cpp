#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
freopen("download_input_1.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int T,ans1,ans2;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ans1=a/b;
        a-=ans1*b;
        ans2=a/c;

        cout<<"Case #"<<i+1<<": "<<ans1<<' '<<ans2<<'\n';
    }
    return 0;
}
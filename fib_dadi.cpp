#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
freopen("output.txt","w",stdout);
int N,a,k,ans;
priority_queue<int,vector<int>,greater<int>>Q;
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>k;
        ans=0;
        for(int j=0;j<4;j++)
        {
            cin>>a;
            while(a>0){
                Q.push(j+1);
                a--;
            }
        }
        while(!Q.empty())
        {
            if(k>0)
            {
                ans+=4;
                k--;
                Q.pop();
            }
            else
            {
                ans+=Q.top();
                Q.pop();
            }
        }
        cout<<"Case #"<<i<<":"<<ans<<endl;
    }
    return 0;
}
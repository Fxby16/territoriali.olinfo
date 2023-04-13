#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
freopen("output.txt","w",stdout);
int N,K,ans=0,temp;
vector<int>fila(100);
vector<int>muro;
    cin>>N;
    for(int i=1;i<=N;i++){
        ans=0;
        cin>>K;
        for(int j=0;j<K;j++){
            cin>>temp;
            fila[j]=temp;
            if(temp==0)
                muro.push_back(j);
        }
        for(int j=0;j<muro.size();j++)
        {
            int tempans=0;
            int pos=0;
            int flag=0;
            if(j>0)
                pos=muro[j-1]+1;
            
            for(int k=pos;k<K && flag!=2;k++){
                if(fila[k]==0)
                    ++flag;
                if(flag==2)
                    break;
                tempans++;
            }
            ans=max(ans,tempans);
        }
        cout<<"Case #"<<i<<":"<<ans<<endl;
    }
    return 0;
}
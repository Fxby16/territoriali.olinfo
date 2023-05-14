#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
freopen("antivirus_input_1.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        string s1,s2,s3,s4;
        int n1,n2,n3,n4;
        int m;
        cin>>n1>>n2>>n3>>n4;
        cin>>m;
        cin>>s1>>s2>>s3>>s4;
        for(int k=0;k<n1-m+1;k++){
            string temp=s1.substr(k,m);
            if(s2.find(temp)!=string::npos && s3.find(temp)!=string::npos && s4.find(temp)!=string::npos)
            {
                cout<<"Case #"<<i<<": "<<k<<' '<<s2.find(temp)<<' '<<s3.find(temp)<<' '<<s4.find(temp)<<'\n';
                break;
            }
        }
    }

    return 0;
}
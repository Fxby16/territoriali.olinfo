#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(int a, int b) {
	if (a==0) 
        return b;
	return gcd(b,a%b);
}

int solve(int N, vector<ll> &V) {
	ll lcm=V[0];
	for (int i=1;i<N;i++) {
		ll g=gcd(lcm,V[i]);
		lcm=(V[i]*lcm)/g;
	}
	return lcm;
}


int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
freopen("caramelle_input_3.txt","r",stdin);
freopen("output.txt","w",stdout);
int T; 
    cin>>T;
	for (int t=1;t<=T;t++) {
		int N; 
        cin>>N;
		vector<ll> V(N);
		for (auto &i:V) 
            cin>>i;
		cout<<"Case #"<<t<<": "<<solve(N,V)<<endl;
    }
    return 0;
}
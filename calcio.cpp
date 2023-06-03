#include <bits/stdc++.h>
using namespace std;

void solve(int t){
int ans=INT_MAX;
int rows,cols,a,b,k;
	cin>>rows>>cols>>k>>a>>b;
vector<vector<int>>m(rows,vector<int>(cols,0));
	for(int i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		m[x][y]++;
	}
	for(int i=1;i<cols;i++)
		m[0][i]+=m[0][i-1];
	for(int i=1;i<rows;i++)
		m[i][0]+=m[i-1][0];

	for(int i=1;i<rows;i++)
		for(int j=1;j<cols;j++)
			m[i][j]+=m[i-1][j]+m[i][j-1]-m[i-1][j-1];

	for(int i=0;i+a-1<rows;i++)
		for(int j=0;j+b-1<cols;j++){
			int temp=m[i+a-1][j+b-1];
			if(i>0)
				temp-=m[i-1][j+b-1];
			if(j>0)
				temp-=m[i+a-1][j-1];
			if(i>0 && j>0)
				temp+=m[i-1][j-1];
			ans=min(ans,temp);
		}

	cout<<"Case #"<<t<<": "<<ans<<'\n';
}

int main(){
ios::sync_with_stdio(false);
cin.tie(0);
freopen("calcio_input_1.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int T;
	cin>>T;
	for(int t=1;t<=T;t++)
		solve(t);

	return 0;
}
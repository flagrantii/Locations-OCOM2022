#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,want;
	cin>>n>>m>>want;
	int sum[n+1][m+1],inp[n+1][m+1];
	memset(inp,0,sizeof(inp));
	memset(sum,0,sizeof(sum));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>inp[i][j];
			sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+inp[i][j];
		}
	}
	int mx=0;
	for(int i=want;i<=n;i++){
		for(int j=want;j<=m;j++){
			mx=max(sum[i][j]-sum[i-want][j]-sum[i][j-want]+sum[i-want][j-want],mx);
		}
	}
	cout<<mx;
}

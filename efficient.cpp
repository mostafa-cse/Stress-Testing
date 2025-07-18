// Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll int
const ll N=15007;
int T,n,a[N],f[N][N],p[N];
int main(){
    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>T;
	while(T--){
		cin>>n;
		for (int i=1;i<=n;++i) cin>>a[i];
		for (int i=n;~i;--i){
			for (int j=0;j<=n;++j) p[j]=-1;
			int now=f[i][i]=a[i];
			for (int j=i+1;j<=n;++j) if (a[j]>=a[i]){
				if (a[j]==a[i]){f[i][j]=++now;continue;}
				if (p[a[j]]==-1&&a[j]<=now+1) p[a[j]]=j;
				if (p[a[j]]!=-1) now=max(now,f[p[a[j]]][j]);
			}
			f[i][0]=now;
		}
		cout<<f[0][0]<<'\n';
		for (int i=0;i<=n;++i) for (int j=0;j<=n;++j) f[i][j]=0;
	}
	return 0;
}
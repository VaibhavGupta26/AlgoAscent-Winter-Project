// Problem link: https://codeforces.com/contest/1000/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N= 1005;
ll mod= 998244353;

int a[N];
int dp[N];
int C[N][N]; // Pascal triangle

int main() {
    
	for(int i=0;i<N;i++){
		C[i][0]=C[i][i]=1;
		for(int j=1;j<i;j++){
		    C[i][j]= (C[i-1][j]+C[i-1][j-1])%mod;
		}
	}
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	dp[n]= 1;
	for(int i=n-1;i>=0;i--){
		if(a[i]<=0)continue;
		
		for(int j=i+a[i]+1;j<=n;j++){
			dp[i]+= ((ll) dp[j] * C[j-i-1][a[i]]) %mod;
			dp[i]%= mod;
		}
	}
	ll sum= 0;
	for(int i=0;i<n;i++){
		sum+= dp[i];
		sum%= mod;
	}
	cout<<sum<<endl;
}
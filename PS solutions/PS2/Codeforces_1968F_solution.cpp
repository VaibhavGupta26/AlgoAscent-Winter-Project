// Problem link: https://codeforces.com/contest/1968/problem/F

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void help(){
    
    int n,q;cin>>n>>q;
    map<int,vector<int>>mp;
	mp[0].push_back(0);
	vector<int>a(n+1,0);
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]^=a[i-1];
		mp[a[i]].push_back(i);
	}
	
	while(q--){
		int l,r;
		cin>>l>>r;
		
		if(a[r]==a[l-1]){
			cout<<"YES"<<endl;
			continue;
		}
		int lt= *--lower_bound( mp[a[l-1]].begin(), mp[a[l-1]].end(), r);
		int rt= *lower_bound(mp[a[r]].begin(), mp[a[r]].end(), l);
		
		if(lt>rt){
		    cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	cout<<endl;
}
int main() {
	// your code goes here
    
    int t;
	cin>>t;
	while(t--){
	    help();
	}
}
 
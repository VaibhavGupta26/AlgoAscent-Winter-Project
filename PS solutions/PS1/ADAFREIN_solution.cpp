// Problem link: https://www.spoj.com/problems/ADAFRIEN/ 

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	
	ll n,k;cin>>n>>k;
	map<string,ll>mp;
	
	for(int i=0;i<n;i++){
	    string s;cin>>s;
	    ll val;cin>>val;
	    mp[s]+=val;
	}
	
	priority_queue<ll>pq;
	for(auto x:mp){
	    pq.push(x.second);
	}
	ll ans=0;
	
	while(pq.size() && k){
	    ans+=pq.top();
	    pq.pop();k--;
	}
    cout<<ans;
}
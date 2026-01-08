// Problem link: https://codeforces.com/contest/903/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int n;cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    int ans=0;
    for(auto x:mp){
        ans=max(ans,x.second);
    }
    cout<<ans<<endl;
}
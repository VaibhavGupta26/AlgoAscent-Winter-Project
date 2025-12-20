// Problem link: https://atcoder.jp/contests/arc087/tasks/arc087_a

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    
    int ans=0;
    for(auto x:mp){
        int val=x.second, key=x.first;
        if(val<key){
            ans+=val;
        }
        else{
            ans+=val-key;
        }
    }
    cout<<ans;
}
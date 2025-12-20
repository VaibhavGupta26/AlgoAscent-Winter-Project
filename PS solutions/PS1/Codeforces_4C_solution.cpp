// Problem link: https://codeforces.com/contest/4/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;cin>>n;
    map<string,int>mp;
    
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(mp.find(s)==mp.end()){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<mp[s]<<endl;
        }
        mp[s]++;
    }
    
}
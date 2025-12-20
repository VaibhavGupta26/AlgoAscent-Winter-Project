// Problem link: https://codeforces.com/contest/44/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;cin>>n;
    set<pair<string,string>>st;
    for(int i=0;i<n;i++){
        string s,t;cin>>s;cin>>t;
        st.insert({s,t});
    }
    cout<<st.size();
    
}
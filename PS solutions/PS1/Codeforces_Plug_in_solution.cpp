// Problem link: https://codeforces.com/contest/81/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;cin>>s;
    stack<char>st;
    
    for(int i=0;i<s.size();i++){
        if(st.empty() || s[i]!=st.top()){
            st.push(s[i]);
        }
        else{
            st.pop();
        }
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
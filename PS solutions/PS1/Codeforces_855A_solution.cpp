// Problem link: https://codeforces.com/contest/855/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;cin>>n;
    set<string>st;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(st.find(s)!=st.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            st.insert(s);
        }
    }
    
}
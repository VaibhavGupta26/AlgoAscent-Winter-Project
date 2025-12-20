// Problem link: https://codeforces.com/contest/112/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	string s;
	cin>>s;
	string t;
	cin>>t;
	int n=s.size();
	bool flag=1;
	for(int i=0;i<n;i++){
	    if(isupper(s[i])){
            s[i]=char('a'+(s[i]-'A'));
        }
        int x=s[i]-'a';
        if(isupper(t[i])){
            t[i]=char('a'+(t[i]-'A'));
        }
        int y=t[i]-'a';
	    
	    if(x!=y){
	        flag=0;
	        if(x>y){
	            cout<<1;
	        }
	        if(x<y){
	            cout<<-1;
	        }
	        break;
	    }   
	}
	if(flag==1){
	    cout<<0;
	}
}
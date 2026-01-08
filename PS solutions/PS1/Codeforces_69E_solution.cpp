// Problem link: http://codeforces.com/contest/69/problem/E

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n,k;cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	
	int i=0,j=0;
	map<int,int>mp;
	set<int>st;
	
	while(j<n){
	    mp[a[j]]++;
	    if(mp[a[j]]==1){
	        st.insert(a[j]);
	    }
	    else{
	        st.erase(a[j]);
	    }
	    if(j-i+1==k){
	        if(st.size()){
	            cout<<*st.rbegin()<<endl;
	        }
	        else{
	            cout<<"Nothing"<<endl;
	        }
	        mp[a[i]]--;
	        if(mp[a[i]]==1){
    	        st.insert(a[i]);
    	    }
    	    else{
    	        st.erase(a[i]);
    	    }
    	    i++;
	    }
	    j++;
	}
	

}
// Problem link: https://codeforces.com/problemset/problem/1033/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(ll n){
    
    if (n%2==0) return 0;
    
    for (ll i=3; i*i<=n; i+=2) {
        if(n%i== 0) return 0;
    }
    return 1;
}

void help(){
    
    ll a,b;cin>>a>>b;
    if(a-b>1){
        cout<<"NO"<<endl;return;
    }
    ll sum=a+b;
    if(check(sum)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
}
int main() {
	// your code goes here
    
    int t;cin>>t;
    while(t--){
        help();
    }
}
// Problem link: https://codeforces.com/contest/300/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod= 1e9+7;
vector<ll>fact;

ll powmod(ll a, ll b, ll p){
    a %= p;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b&1){    // you can also use b % 2 == 1
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    // you can also use b >> 1
    }
    return product;
}
ll inv(ll a, ll p){
    return powmod(a, p-2, p);
}
ll nCk(ll n, ll k, ll p){
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n-k], p)) % p;
}
int check(ll sum,int a,int b){
    
    while(sum){
        int dig=sum%10;
        if(dig!=a && dig!=b){
            return 0;
        }
        sum/=10;
    }
    return 1;
}

int main() {
	// your code goes here
	
    ll a,b,n;cin>>a>>b>>n;
    fact.resize(n+1);
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i]= (fact[i-1]*i)%mod;
    }
    
    ll x=n,y=0,ans=0;
    while(y<=n){
        ll sum= (a*x)+(b*y);
        if(check(sum,a,b)){
            ans+= nCk(n,x,mod);
            ans%=mod;
        }
        x--;y++;
    }
    cout<<ans%mod<<endl;
    
}
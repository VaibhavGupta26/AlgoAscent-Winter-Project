// Problem link: https://codeforces.com/contest/1359/problem/E

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod= 998244353,N=500005;
vector<ll>fact(N);
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
    if(n<k){
        return 0;
    }
    return ((fact[n] * inv(fact[k] , p) % p) * inv(fact[n-k], p)) % p;
}

void calc(){
    fact[0]= 1;
	for(int i=1; i<N;i++){
		fact[i]= (i * fact[i-1])%mod;
	}
}
int main() {
	// your code goes here
    
    int n,k;cin>>n>>k;
    ll ans=0;
    calc();
    for(int i=1;i<=n;i++){
        int val =n/i;
        ans+= nCk(val-1,k-1,mod);
        ans%=mod;
    }
    cout<<ans;
}
// Problem link: https://atcoder.jp/contests/abc164/tasks/abc164_d

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    int n=s.size(),mod=2019;

    vector<ll>cnt(mod,0);
    ll ans=0;
    int cur= 0, pten=1;

    cnt[0]= 1;
    for (int i=n-1;i>=0;i--) {
        int dig= s[i]-'0';
        cur= (cur+(dig*pten))%mod;
        ans+= cnt[cur];
        cnt[cur]++;
        pten= (pten*10)%mod;
    }
    cout<<ans<<endl;
}
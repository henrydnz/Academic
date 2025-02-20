#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long
#define all(a) a.begin(), a.end()

const ll sz=1e5;
ll ans[3][sz];

void answer() {
    ll t; cin>>t;
    ans[0][1]=-1e6;
    ans[1][1]=1e6;
    ans[2][1]=0;
    for(ll i=1;i<=t;i++) {
        int op;cin>>op;
        if(op==1) {
            ll n;cin>>n;
            ans[0][i]=max(n,ans[0][i-1]);
            ans[1][i]=min(n,ans[1][i-1]);
            cout<<ans[0][i]<<" "<<ans[1][i]<<"\n";
            ans[2][i]=n+ans[2][i-1];
        } else {
            ans[0][i]=ans[0][i-1];
            ans[1][i]=ans[1][i-1];
            ans[2][i]=ans[2][i-1];
            int time; cin>>time;
            cout<<ans[op-2][time-1]<<" bogos binted\n";
            for(int i=0;i<t;i++)cout<<ans[0][i]<<" "<<ans[1][i]<<" "<<ans[2][i]<<"\n";
        }
    }
}

int main() {
    fastio;
    answer();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> dp(m+1,0);
    dp[0]=1;

    for(int i=0;i<n;i++){
        for(int j=a[i];j<=m;j++){
            dp[j] = (dp[j] + dp[j-a[i]]) % 1000000007;
        }
    }

    cout<<dp[m]<<"\n";

    return 0;
}
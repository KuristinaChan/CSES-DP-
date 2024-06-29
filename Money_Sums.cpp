#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> x(n,0);

    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        x[i]=r;
    }

    vector<bool> dp(1e5+1,false);

    dp[0] = true;

    for(int i=0;i<n;i++){
        for(int j=1e5;j>=x[i];j--){
            
                dp[j]=dp[j]||dp[j-x[i]];
            
        }
    }

    vector<int> res;
    for(int i=1;i<=1e5;i++){
        if(dp[i]){
            res.push_back(i);
        }
    }

    cout<<res.size()<<endl;

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}
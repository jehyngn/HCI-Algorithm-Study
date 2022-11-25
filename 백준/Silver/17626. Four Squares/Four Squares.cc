#include <iostream>
using namespace std;

int dp[50001];



int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    for(int i=0;i<=225;i++){ // i^2 = 1
        dp[i*i]=1;
    }

    dp[2] = 2;
    dp[3] = 3;
    
    for(int i=5;i<=n;i++){
        if(dp[i]==1){
            continue;
        }
        int mint = 1e7;
        for(int j=1;j*j<=i;j++){
            int temp = i-j*j;
            mint = min(mint, dp[temp]);
        }
        
        dp[i] = mint+1;
    }
    cout << dp[n];
}
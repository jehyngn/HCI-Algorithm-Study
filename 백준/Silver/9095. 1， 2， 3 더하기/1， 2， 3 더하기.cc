#include <iostream>
using namespace std;

int dp[11];

int main(){
    int tc;
    cin >> tc;
    for(int i=0;i<tc;i++){
        int n;
        cin >> n;
    
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
    
        for(int i=4;i<=n;i++){
            dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
        }
        cout << dp[n] <<'\n';
    }
}
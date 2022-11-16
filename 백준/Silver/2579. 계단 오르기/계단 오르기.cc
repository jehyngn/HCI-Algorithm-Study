#include <iostream>
using namespace std;
#define MAX 301

int stairs[MAX];
int dp[MAX];

int main(){
    int n;
    cin >> n;
    int stairs[n];
    for(int i=0;i<n;i++){
        cin >> stairs[i];
    }

    dp[0] = stairs[0]; // 1층
    dp[1] = max(stairs[1], (stairs[1]+stairs[0])); // 2층 
    dp[2] = max((stairs[0]+stairs[2]), (stairs[1]+stairs[2])); // 3층 

    for(int i=3;i<=n;i++){
        dp[i] = max((dp[i-3]+stairs[i-1]), dp[i-2])+stairs[i];
    }

    cout << dp[n-1];
}
#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001];

int main(){
    int n;
    cin >> n;

    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=n;i++){
        int num1=1e07, num2=1e07, num3=1e07;
        if(i%2==0){
            int temp;
            temp = i/2;
            num1 = dp[temp];
            num1 += 1;
        }
        if(i%3==0){
            int temp;
            temp = i/3;
            num2 = dp[temp];
            num2 += 1;
        }
        
        int temp;
        temp = i-1;
        num3 = dp[temp];
        num3 += 1;
        // cout << num1 << ' ' << num2 << ' ' << num3 << '\n';
        dp[i] = min(num1, min(num2, num3));
    }
    cout << dp[n];
}
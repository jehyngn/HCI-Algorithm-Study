#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N, K;
    cin >> N >> K;

    int arr[N];
    for(int i=1;i<=N;i++){
        cin >> arr[i];
    }

    int ans=0;
    for(int i=N;i>=0;i--){
        ans += K/arr[i];
        K %= arr[i];
    }

    cout << ans;
}
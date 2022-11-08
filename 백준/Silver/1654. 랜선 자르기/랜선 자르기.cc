#include <iostream>
#include <algorithm>
using namespace std;

long long list[10000];

int main(){
    int K, N;
    cin >> K >> N;

    long long maxi=0;
    
    for(int i=0;i<K;i++){
        cin >> list[i];
        maxi = max(maxi, list[i]);
    }

    long long left=1, right=maxi, mid;

    long long ans;
    while(left<=right){
        mid = (left+right)/2;

        int mox = 0;
        for(int i=0;i<K;i++){
            mox += (list[i]/mid);
        }

        if(mox>=N){
            left = mid+1;
            ans = mid; // 여기 수정 
        }
        else{
            right = mid-1;
        }
    }
    cout << ans;
}
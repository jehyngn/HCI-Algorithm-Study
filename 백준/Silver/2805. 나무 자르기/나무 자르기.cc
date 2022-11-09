// 이분탐색
#include <iostream>
using namespace std;

long long list[1000001];

int main(){
    long long N, M;
    cin >> N >> M;

    long long maxi=0;
    for(int i=0;i<N;i++){
        cin >> list[i];
        maxi = max(maxi, list[i]); // 나무들 중 제일 긴 나무를 maxi에 저장
    }
    
    long long left=0, right=maxi, mid;
    long long ans;
    while(left<=right){
        long long sum_namu=0;
        mid = (left+right)/2;
        for(int i=0;i<N;i++){
            if((list[i]-mid)>0) sum_namu+=(list[i]-mid);
        }
        if(sum_namu>=M){
            left = mid+1;
            ans=mid;
        }
        else{
            right = mid-1;
        }
    }
    cout << ans;
}
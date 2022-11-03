#include <iostream>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    
    for(int l=0;l<t;l++){
        
        int k, n; // k: 층, n: 호
        cin >> k >> n;
    
        int arr[k+1][n+1]={0}; // k는 0층~k층, n은 1호~n호
    
        for(int i=0;i<=k;i++){ // k는 0층~k층
            for(int j=1;j<=n;j++){ // n은 1호~n호
                if(i==0){
                    arr[i][j]=j; // 0층에 명수 정보 담김
                }
                else{
                    int cnt=j;
                    while(cnt>0){
                        arr[i][j]+=arr[i-1][cnt];
                        cnt--;
                    }
                }
            }
        }
    
        cout << arr[k][n]<<'\n';
    }
}
#include <iostream>
using namespace std;


// bottom-up 으로 피보나치 값 구하기
int fibonachi2(int n){
    long long arr[n+1][2];
    arr[0][0]=1;
    arr[0][1]=0;
    arr[1][0]=0;
    arr[1][1]=1;
    for(int i=2;i<=n;i++){
        arr[i][0]=arr[i-1][0]+arr[i-2][0];
        arr[i][1]=arr[i-1][1]+arr[i-2][1];
    }
    int n1 = arr[n][0];
    int n2 = arr[n][1];
    cout << n1 << ' ' << n2 << '\n';
    return 0;
}


int main(){
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int N;
        cin >> N;
        fibonachi2(N);
    }
}
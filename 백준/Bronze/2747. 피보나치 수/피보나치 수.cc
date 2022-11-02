#include <iostream>
using namespace std;

//재귀 이용해서 피보나치 값 구하기
// int fibonachi(int n){
//     int result;
//     if(n>=2){
//         result = fibonachi(n-1) + fibonachi(n-2);
//     }
//     else if(n==1) result = 1;
//     else if(n==0) result = 0;
//     return result;
// }

// bottom-up 으로 피보나치 값 구하기
int fibonachi(int n){
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}


int main(){
    int N;
    cin >> N;
    cout << fibonachi(N);
}
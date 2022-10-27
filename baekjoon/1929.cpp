// https://www.acmicpc.net/problem/1929
#include <iostream>
using namespace std;

int arr[1000001];

void primeNum(int num){
    for(int i=2;i<=num;i++){ 
        arr[i]=i;
    }
    
    for(int i=2;i<=num;i++){
        if(arr[i]==0) continue; // 이미 지워졌으면 건너 뜀
        for(int j=2*i;j<=num;j+=i){
            arr[j]=0;
        }
    }
}

int main(){
    int min, max;
    cin >> min >> max;

    primeNum(max);
    for(int i=min;i<=max;i++){
        if(arr[i]!=0) cout << arr[i]<<'\n';
    }
    
}

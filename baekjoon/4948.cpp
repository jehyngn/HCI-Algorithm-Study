// https://www.acmicpc.net/problem/4948
#include <iostream>
using namespace std;

int arr[250000];
int cnt = 0;


int primeNum(int N){
    for(int i=0;i<=2*N;i++){
        arr[i] = i;
    }

    for(int i=2;i<=2*N;i++){
        if(arr[i]==0) continue;
        for(int j=2*i;j<=2*N;j+=i){
            arr[j] = 0;
        }
    }
    for(int i=N+1;i<=2*N;i++){
            if(arr[i] != 0) cnt++;
    }
    int result = cnt;
    cnt = 0;
    return result;
}


int main(){
    while(1){
        int test;
        cin >> test;
        if(test == 0){
            return 0;
        }
        int result = primeNum(test);
        cout << result << '\n';
    }
}

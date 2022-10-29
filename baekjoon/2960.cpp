// https://www.acmicpc.net/problem/2960
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    int arr[N+1];
    for(int i=2;i<=N;i++){
        arr[i]=i;
    }
    int size = sizeof(arr)/sizeof(int);

// count = 1
    // 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    int count = 0;
    while(1){
        int min = *min_element(arr+2, arr+size);  // 
        for(int i=min;i<=N;i+=min){
            if(arr[i] != 1001){
                count++;
                arr[i]=1001; // 지움 
            }
            if(count == K){
                cout << i;
                return 0;
            }
        }
    }
    

}

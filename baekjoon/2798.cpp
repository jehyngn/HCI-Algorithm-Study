// https://www.acmicpc.net/problem/2798
#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    int arr[100];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    int max = 0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                int temp = arr[i]+arr[j]+arr[k];
                if(temp <= M && temp > max){
                    max = temp;
                }
            }
        }
    }
    cout << max;
}

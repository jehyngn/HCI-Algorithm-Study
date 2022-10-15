// https://www.acmicpc.net/problem/11866
#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    int arr[N];
    queue<int> que;

    for(int i=1;i<N+1;i++){
        que.push(i);
    }
    int num = 0;
    while(!que.empty()){
        for(int i=0;i<K-1;i++){
            int temp = que.front();
            que.pop();
            que.push(temp);
        }
        arr[num] = que.front();
        que.pop();
        num++;
    }
    cout << "<";
    for(int i=0;i<N;i++){
        if(i == N-1) {
            cout << arr[i] << ">";
            continue;
        }
        cout << arr[i] << ", ";
    }
}

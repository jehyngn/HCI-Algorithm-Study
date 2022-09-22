#include <iostream>
// https://www.acmicpc.net/problem/1158
#include <queue>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    queue<int> queue;
    int arr[N];
    int arr_index = 0;
    
    for(int i=0;i<N;i++){
        queue.push(i+1);
    }

    while(queue.size()){
        for(int j=0;j<K-1;j++){
            int temp = queue.front();
            queue.pop();
            queue.push(temp);
        }
        int pop_num = queue.front();
        arr[arr_index++] = pop_num;
        queue.pop();
    }

    cout <<"<";
    for(int k=0;k<N;k++){
        if(k+1 == sizeof(arr)/sizeof(int)){
            cout << arr[k] << ">";
            break;
        }
        cout << arr[k] << ", ";      
    }
}

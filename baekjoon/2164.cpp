// https://www.acmicpc.net/problem/2164
#include <iostream>
#include <deque>
using namespace std;

int main(){
    iso_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    deque<int> deque;
    for(int i=N;i>=1;i--){
        deque.push_front(i);
    }
    // cout << deque.front() << deque.back();
    // 1 2 3 4
    while(deque.size() != 1){
        deque.pop_front();
        int temp = deque.front();
        deque.pop_front();
        deque.push_back(temp);
    }
    cout << deque.front();
}

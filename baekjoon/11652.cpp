// https://www.acmicpc.net/problem/11652
#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;

    map<long, long> card;
    
    for(int i=0;i<N;i++){
        long temp;
        cin >> temp;
        card[temp]++;
        }

    long max=0;
    long max_key;
    for(auto iter:card){
        if(iter.second > max){
            max = iter.second;
            max_key = iter.first;
            }
    }
    cout << max_key;
}

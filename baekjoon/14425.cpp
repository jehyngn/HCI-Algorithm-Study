// https://www.acmicpc.net/problem/14425
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    map<string, int> set;

    int cnt = 0;
    
    for(int i=0;i<N;i++){
        string temp;
        cin >> temp;
        set[temp]=true;
    }

    for(int i=0;i<M;i++){
        string temp;
        cin >> temp;
        if (set[temp]==true) cnt ++;
    }

    cout << cnt;
}

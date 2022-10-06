// https://www.acmicpc.net/problem/1620
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M; // N : 도감에 등록되어있는 포켓몬의 개수, M : 맞출 문제
    cin >> N >> M;

    unordered_map<string, int> dogam;
    string name[100001];
    
    for(int i=1;i<N+1;i++){
        string poketmon;
        cin >> poketmon;
        dogam[poketmon] = i;
        name[i] = poketmon;
    }

    for(int i=0;i<M;i++){
        string find;
        cin >> find;
        // ascii 에서 A : 65, a : 97, 0 : 48, 9 :57
        if(int(find[0]) < 60){ // 60 under : number / upper : alphabet
            int index = stoi(find);
            cout << name[index] << '\n';
        }
        else{
            auto iter = dogam.find(find);
            cout << iter->second << '\n';
        }
    }
    
}

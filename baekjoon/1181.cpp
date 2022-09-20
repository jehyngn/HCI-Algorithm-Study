// https://www.acmicpc.net/problem/1181
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b){
    if(a.size() != b.size()){
        return a.size() < b.size();
    }
    else{
        return a < b;
    }
}
    
int main(){
    int N;
    cin >> N;

    string words[N];

    for(int i=0;i<N;i++){
        cin >> words[i];
    }
    sort(words, words+N, compare);

    for(int i=0;i<N;i++){
        if(words[i] == words[i-1]){
            continue;
        }
        else{
            cout << words[i] <<"\n";
        }
    }
}

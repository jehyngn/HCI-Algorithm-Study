//https://www.acmicpc.net/problem/17219
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    map<string, string> pass;

    string temp1, temp2;
    for(int i=0;i<N;i++){
        cin >> temp1 >> temp2;
        pass.insert({temp1, temp2});
    }

    string find;
    for(int i=0;i<M;i++){
        cin >> find;
        cout << pass.find(find)->second << "\n";
    }
}

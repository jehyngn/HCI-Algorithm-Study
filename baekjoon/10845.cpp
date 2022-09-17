// https://www.acmicpc.net/problem/10845
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;

    cin.ignore();
    queue<int> q;
    string seq;
    for(int i=0;i<N;i++){
        cin >> seq;
        if(seq == "push"){
            int X;
            cin >> X;
            q.push(X);
        }
        else if(seq == "pop"){
            if(!q.empty()){
                cout << q.front() <<"\n";
                q.pop();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(seq == "size"){
            cout << q.size() << "\n";
        }
        else if(seq == "empty"){
            cout << (q.empty()?1:0) <<"\n"; 
        }
        else if(seq == "front"){
            if(!q.empty()){
                cout << q.front() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
        else if(seq == "back"){
            if(!q.empty()){
                cout << q.back() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
    }
}

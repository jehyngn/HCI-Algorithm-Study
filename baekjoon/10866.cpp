// https://www.acmicpc.net/problem/10866
#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;

    string seq;
    deque<int> deq;
    
    for(int i=0;i<N;i++){
        cin >> seq;

        if (seq == "push_front"){
            int X;
            cin >> X;
            deq.push_front(X);
        }
        else if(seq == "push_back"){
            int X;
            cin >> X;
            deq.push_back(X);
        }
        else if(seq == "pop_front"){
            if(!deq.empty()){
                cout << deq.front() <<"\n";
                deq.pop_front();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(seq == "pop_back"){
            if(!deq.empty()){
                cout << deq.back() << "\n";
                deq.pop_back();
            }
            else{
                cout << "-1\n";
            }
        }
        else if(seq == "size"){
            cout << deq.size() << "\n";
        }
        else if(seq == "empty"){
            cout << (deq.empty()?1:0) << "\n";
        }
        else if(seq == "front"){
            if(!deq.empty()){
                cout << deq.front()<<"\n";
            }
            else{
                cout << "-1\n";
            }
        }
        else if(seq == "back"){
            if(!deq.empty()){
                cout << deq.back() << "\n";
            }
            else{
                cout << "-1\n";
            }
        }
    }
    
}

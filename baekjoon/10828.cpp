// https://www.acmicpc.net/problem/10828
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    string command;
    int N;
    int num;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> command;

        if(command == "push"){
            cin >> num;
            s.push(num);
        }

        else if(command == "pop"){
            if(s.empty()){
                cout <<"-1\n";
            }
            else{
                cout << s.top()<<"\n";
                s.pop();
            }
        }

        else if(command == "size"){
            cout<<s.size()<<"\n";
        }

        else if(command == "empty"){
            if(s.empty()){
                cout << "1\n";
            }
            else{
                cout<<"0\n";
            }
        }

        else if(command == "top"){
            if(s.empty()){
                cout << "-1\n";
            }
            else{
                cout << s.top()<<"\n";
            }
        }
    }
    return 0;
}

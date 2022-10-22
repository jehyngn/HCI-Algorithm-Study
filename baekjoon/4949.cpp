// https://www.acmicpc.net/problem/4949
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string seq;
    bool flag = true;
    stack<char> s;
    
    while(getline(cin, seq)){
        if(seq == "."){
            return 0;
        }
        int size = seq.size();
        // 문자열 하나씩 check
        for(int i=0;i<size;i++){
            if(seq[i] == '(' || seq[i] == '['){
                s.push(seq[i]);
            }
            else if(seq[i] == ')'){
                if(!s.empty()){
                    if(s.top() == '('){
                        s.pop();
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
                else{
                    flag = false;
                        break;
                }
            }
            else if(seq[i] == ']'){
                if(!s.empty()){
                    if(s.top() == '['){
                        s.pop();
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
                else{
                    flag = false;
                        break;
                }
            }
        }
        if(!s.empty() || !flag) cout << "no\n";
        else  cout << "yes\n";
        while(!s.empty()){
            s.pop();
        }
        flag = true;
    }
}

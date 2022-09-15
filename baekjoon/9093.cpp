#include <iostream>
#include <string>
#include <stack>
// https://www.acmicpc.net/problem/9093
#include <typeinfo>
using namespace std;

int main(){
    int N;
    cin >> N;
    stack<char> s;
    cin.ignore();
    
    for (int i=0;i<N;i++){
        string seq;
        getline(cin, seq);
        int size = seq.size();
        for(int j=0;j<size;j++){
            
            if(seq[j]!=' '){
                s.push(seq[j]);
            }
            else{    
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
                cout<<" ";
            }
        }
        while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
        cout <<"\n";
    }
    
    return 0;
}

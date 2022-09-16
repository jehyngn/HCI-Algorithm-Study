#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    string VPS;


    for(int i=0;i<N;i++){
        stack<char> s;
        cin >> VPS;
        int size = VPS.size();
        for(int j=0;j<size;j++){
            if(VPS[j] == '('){
                s.push(VPS[i]);
                
            }
            else if(VPS[j] == ')'){
                if(s.empty()){
                    s.push(VPS[i]);
                    break;
                }
                else{
                    s.pop();
                }
            }
        }
        
        if(s.empty()){
            cout << "YES\n";
            }
        else{
            cout << "NO\n";
            }
        while(!s.empty()) s.pop();
    }
}

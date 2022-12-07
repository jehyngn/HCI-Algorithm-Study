// multiset 활용

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

bool comp(int a, int b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    for(int t=0;t<T;t++){
        multiset <int> s;
        int N;
        cin >> N;
        for(int i=0;i<N;i++){
            char c;
            cin >> c;
            if(c == 'I'){
                int x;
                cin >> x;
                s.insert(x);
                // cout << q.back() << " back insert\n";
            }
            else if(c =='D'){
                int x;
                cin >> x;
                if(x == 1){
                    if(s.size()!=0){
                        auto iter = s.end();
                        iter--;
                        s.erase(iter);        
                        }
                }
                else if (x==-1){
                    if(s.size()!=0) {
                        s.erase(s.begin());
                    }
                }
            }
        }
        
        if(s.size()==0) cout << "EMPTY\n";
        else {
            auto iter = s.end();
            iter--;
            cout << *iter << ' ' << *s.begin() << '\n'; 
            }
    }
}
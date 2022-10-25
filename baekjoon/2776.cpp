// https://www.acmicpc.net/problem/2776
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int TestCase;
    int bn1, bn2;
    cin >> TestCase;
    for(int i=0;i<TestCase;i++){
        cin >> bn1;
        unordered_map<int, int> book1;
        for(int i=0;i<bn1;i++){
            int temp;
            cin >> temp;
            book1[temp]= 1;
        }
        cin >> bn2;
        for(int i=0;i<bn2;i++){
            int temp;
            cin >> temp;
            // cout << book1[temp];
            if(book1[temp] == 1) cout << "1\n";
            else cout << "0\n";
        }
        
    }
    return 0;
}

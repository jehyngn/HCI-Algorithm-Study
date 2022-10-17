// https://www.acmicpc.net/problem/10816
#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    map<int, int> count;
    
    for(int i=0;i<N;i++){
        int temp;
        cin >> temp;
        if(count[temp]) count[temp]++;
        else count[temp]=1;
    }

    int M;
    cin >> M;
    for(int i=0;i<M;i++){
        int num;
        cin >> num; 
        cout << count[num] << ' ';
    }
}

// https://www.acmicpc.net/problem/1966
#include <iostream>
#include <queue>
using namespace std;;

int main(){
    int testcase;
    int n, m;
    int imp;
    int count;

    cin >> testcase;

    for(int i=0;i<testcase;i++){
        count = 0;
        cin >> n >> m;

        priority_queue<int> pQ;
        queue<pair<int, int>> q;

        for(int j =0;j<n;j++){
            cin >> imp;
            q.push({j, imp});
            pQ.push(imp);
        }

        while(!q.empty()){
            int location = q.front().first;
            int value = q.front().second;
            q.pop();

            if(pQ.top() == value){
                pQ.pop();
                count++;
                if(m == location){
                    cout << count<<"\n";
                    break;
                }
            }
            else {
                q.push({location, value});
            }
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
// map에 듣도 -> name, 0으로 mapping
// 보도 -> find, 있으면 1로 value change
// value가 1인 것만 count, 출력 

int main(){
    int N, M;
    cin >> N >> M;

    map<string, int> map;

    for(int i=0;i<N;i++){
        string temp = "";
        cin >> temp;
        map[temp] = 1;
    }

    for(int i=0;i<M;i++){
        string temp2 ="";
        cin >> temp2;
        map.find(temp2) -> second = 0;
    }
    int cnt = 0;
    for (auto iter = map.begin() ; iter !=  map.end(); iter++)
    {
    	if(iter->second == 0){
            cnt++;
        }
    }
    cout << cnt<<'\n';
    
    for (auto iter = map.begin() ; iter !=  map.end(); iter++)
    {
    	if(iter->second == 0){
        cout << iter->first << '\n';
        }
    }

}

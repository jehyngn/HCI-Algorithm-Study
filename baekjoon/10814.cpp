// https://www.acmicpc.net/problem/10814
// stable_sort : 입력 순서를 유지하는 안정적인 정렬


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, string> u, pair<int, string> v){
    return u.first < v.first;
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, string>> vec(N) ;

    for(int i=0;i<N;i++){
        cin >> vec[i].first >> vec[i].second;
    }

    stable_sort(vec.begin(), vec.end(), cmp);
    
    for(int i=0;i<N;i++){
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}

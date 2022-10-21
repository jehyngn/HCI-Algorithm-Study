// https://www.acmicpc.net/problem/11651
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else return a.second < b.second;
}

int main(){
    int N;
    cin >> N;
    vector<pair<int, int>> vec;

    for(int i=0;i<N;i++){
        int a, b;
        cin >> a >> b;
        vec.push_back(pair<int, int>(a, b));
    }

    sort(vec.begin(), vec.end(), compare);

    for(int i=0;i<N;i++){
        cout << vec[i].first << ' '<< vec[i].second << '\n';
    }
}

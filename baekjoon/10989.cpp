// https://www.acmicpc.net/problem/10989
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    cin >> N;
    int arr[10001] = {0};
    for(int i=0;i<N;i++){
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for(int i=0;i<10001;i++){
        for(int j=0;j<arr[i];j++){
            cout << i << '\n';
        }
    }

}

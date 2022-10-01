// https://www.acmicpc.net/problem/1427
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string seq;
    cin >> seq;

    int size = seq.size();
    int arr[size] = {0};
    for(int i=0;i<size;i++){
        arr[i] = seq[i] -'0';
    }

    sort(arr, arr+size); 

    for(int i=size-1;i>=0;i--){
        cout << arr[i];
    }
}

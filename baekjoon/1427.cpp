// https://www.acmicpc.net/problem/1427
#include <iostream>
#include <algorithm>
#include <string>

bool compare(char a, char b){
    return a > b;
}

int main(){
    int N;
    cin >> N;
    string seq;
    seq = to_string(N);
    sort(begin(seq), end(seq), compare);
    cout << seq;
}
 

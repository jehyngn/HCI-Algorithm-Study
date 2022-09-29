//https://www.acmicpc.net/problem/1157
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string seq;
    cin >> seq;

    int alphabet[26] = {0}; // 0~25
    // a = 97, A = 65, 소 -> 대 : (-32)
    int size = seq.size();
    
    for(int i=0;i<size;i++){
        int char_to_int = int(seq[i]);
        if(char_to_int >= 97){
            char_to_int = char_to_int - 32; // 소문자 -> 대문자
        }
        // cout << char_to_int<<"\n";
        // A : 65, Z : 90 => A : 0, Z : 25(alphbet arry index)
        int add_num = char_to_int - 65;
        alphabet[add_num]++; 
    }


    
    int max=0;
    int index;
    // 최대값, index 뽑는 반복문
    for(int j=0;j<26;j++){
        if(alphabet[j]>max) {
            max = alphabet[j];
            index = j;
        }
    }

    // 최대값이 두개이상인 경우를 찾는 반복문
    int cnt = 0;
    for(int k=0;k<26;k++){
        if(alphabet[k] == max){
            cnt++;
        }
    }
    if(cnt>1){
        cout << "?";
        return 0;
    }
    else{
        char result = index + 65;
        cout << result;
        }
}

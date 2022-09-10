#include <iostream>
// 브루트포스 알고리즘
// https://www.acmicpc.net/problem/1436
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    int number;
    
    
    for(int i=666;;i++){ //6666
        string str = to_string(i); //'6666'
        int length = str.length(); // 4
        for(int j=0;j<length;j++){ // 4
            if(j <= length-3){ // 0, 1, 2
                if(str[j] == '6'){
                    if(str[j+1] == '6'){
                        if(str[j+2] == '6'){
                            cnt++;
                            number = i;
                            break;
                        }
                    }
                }
            }
        }
        if (cnt == n){
            break;
        }
    }
    
    cout << number;
}

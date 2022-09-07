// https://www.acmicpc.net/problem/1152
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    getline(cin, str);

    int cnt=0;
    int size = str.size();
    for(int i=0;i<size;i++){
        if(str[i] == ' '){
            cnt++;
        }
    }
    if (str[0] == ' '){
        cnt-=1;
    }
    if(str[size-1] == ' '){
        cnt -= 1;
    }
    cout << cnt+1;
}

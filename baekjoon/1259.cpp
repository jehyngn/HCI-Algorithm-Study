// https://www.acmicpc.net/problem/1259
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    while(1){
        cin >> str;
        if (str == "0"){
            break;
        }
        string temp = str;
        reverse(str.begin(), str.end());
        if(temp == str){
            cout << "yes\n";
            }
        else {
            cout << "no\n";
        }
    } 
}


// https://www.acmicpc.net/problem/1032
#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int size;
    string comp;
    cin >> N;
    for(int i=0;i<N;i++){
        if(i==0){
            cin >> comp;
            size = comp.size();
        }
        else{
            string temp;
            cin >> temp;
            for(int j=0;j<size;j++){
                if(comp[j] != temp[j]){
                    comp[j] = '?';
                }
            }
        }
    }
    for(int i=0;i<size;i++){
        cout << comp[i]; 
    }
}

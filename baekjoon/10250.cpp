//https://www.acmicpc.net/problem/10250
#include <iostream>
using namespace std;

int H, W, num;
int cheung, dong;

void solution(){
    cin >> H >> W >> num;
    int a = num/H; // 몫
    int b = num%H; // 나머지
    if(b == 0){
        dong = a;
        cheung = H;
    }
    else{
        dong = a+1;
        cheung = b;
    }
    if(dong<10){
        cout << cheung <<"0"<<dong<<'\n';
        }
    else{
        cout << cheung << dong <<'\n';
    }
}


int main(){
    int Testcase;
    cin >> Testcase;
    for(int i=0;i<Testcase;i++){
        solution();
    }
}

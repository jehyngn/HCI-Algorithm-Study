#include <iostream>
using namespace std;

int main(){
    int hap, cha;
    cin >> hap >> cha;
    int a = (hap+cha)/2;
    int b = (hap - cha)/2;
    if(hap<cha){
        cout << "-1";
        return 0;
    }
    else{
        if((a+b == hap) && (a-b) == cha){
        cout << a << ' ' << b;
    }
        else cout << "-1";
    }
}
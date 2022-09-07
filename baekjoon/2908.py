// https://www.acmicpc.net/problem/2908
#include <iostream>
using namespace std;

int main(void){
    int n1, n2;
    cin >> n1 >> n2;

    int a1, b1, c1, a2, b2, c2;
    
    a1 = n1 / 100;
    b1 = (n1 - a1*100) / 10;
    c1 = n1-(a1*100 + b1*10);
    
    a2 = n2 / 100;
    b2 = (n2 - a2*100) / 10;
    c2 = n2-(a2*100 + b2*10);
    
    int rn1, rn2; // rn means reverse num

    rn1 = c1*100 + b1*10 + a1;
    rn2 = c2*100 + b2*10 + a2;
    
    int result = (rn1>rn2) ? rn1:rn2;

    cout << result;
}

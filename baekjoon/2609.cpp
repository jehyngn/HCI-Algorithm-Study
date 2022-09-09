// acmicpc.net/problem/2609
#include <iostream>
using namespace std;

int gcd(int a, int b){ // 유클리드 호재법 
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}


int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int choi = gcd(n1, n2);
    int dae = n1*n2/choi; // 최소공배수 = n1 * n2 / 최대공약수

    cout << choi << "\n" << dae;
    return 0;
}

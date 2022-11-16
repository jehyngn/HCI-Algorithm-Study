#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int first = n;
    while(1){
        int a = n/10; // 8
        int b = n%10; // 4
        int next_num = b*10+((a+b)%10); // 42
        if(next_num==first){ // 42
            cnt++;
            cout << cnt;
            return 0;
        }
        cnt++; // 
        n = next_num;
    }
}
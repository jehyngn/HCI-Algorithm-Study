#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res=1;
    for(int i=n;i>0;i--){
        res *= i;
    }
    cout << res;
}
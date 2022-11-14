#include <iostream>
using namespace std;

int main(){
    int total, n;
    cin >> total >> n;
    for(int i=0;i<n;i++){
        int money, num;
        cin >> money >> num;
        total -= money*num;
    }
    if(total == 0) cout << "Yes";
    else cout << "No";
}
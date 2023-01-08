#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<n-i+1;j++){ // 0 1 2 3 4
            cout << ' ';
        }
        for(int k=0;k<2*i-1;k++){ // 1 3 5 7 9
            cout << '*';
        }
        
        cout << '\n';
    }
}
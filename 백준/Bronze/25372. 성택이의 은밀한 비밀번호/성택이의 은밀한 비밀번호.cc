#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string seq;
        cin >> seq;
        if(6<=seq.size() && seq.size()<=9) cout << "yes\n";
        else cout << "no\n";
    }
}
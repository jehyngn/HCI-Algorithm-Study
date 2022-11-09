#include <iostream>
using namespace std;

int A[500001];
long long sum, x,sum_xor;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int M;
    cin >> M;
    for(int i=0;i<M;i++){
        int query;
        cin >> query;
        if(query == 1){
            cin >> x;
            sum += x;
            sum_xor ^= x;
        }
        else if(query == 2){
            cin >> x;
            sum -= x;
            sum_xor ^= x;
        }
        else if(query == 3){
            cout << sum << '\n';
        }
        else{
            cout << sum_xor << '\n';
        }
    }
}
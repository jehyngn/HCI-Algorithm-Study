#include <iostream>
using namespace std;

long long P[101];

int main(){
    P[1]=1;
    P[2]=1;
    P[3]=1;
    P[4]=P[1]+P[3];
    P[5]=P[4];

    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        for(int j=6;j<=n;j++){
            P[j] = P[j-5] + P[j-1];
        }
        cout << P[n]<<'\n';
    }
}
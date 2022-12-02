#include <iostream>
using namespace std;

int arr[100001][2];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        cin >> arr[i][0];
        if (i==0) arr[i][1] = arr[i][0];
        else{
            arr[i][1] = arr[i][0] + arr[i-1][1];
        }
    }

    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        cout << arr[b][1]-arr[a-1][1] <<'\n';
    }
}
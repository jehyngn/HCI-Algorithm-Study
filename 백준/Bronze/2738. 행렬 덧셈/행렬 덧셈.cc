#include <iostream>
using namespace std;

int arr[101][101];

int main(){
    int N, M;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int temp;
            cin >> temp;
            arr[i][j]+=temp;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            int temp;
            cin >> temp;
            arr[i][j]+=temp;
        }
    }
     for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cout << arr[i][j] <<' ';
        }
        cout << '\n';
    }
}
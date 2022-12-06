#include <iostream>
using namespace std;

int xy[101][101];

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x, y;
        cin >> x >> y;
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                xy[x+j][y+k]++;
            }
        }
    }

    int result=0;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(xy[i][j] == 0) {
                result++;
            }
        }
    }
    
    cout << 10201-result;
}
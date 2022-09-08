// https://www.acmicpc.net/problem/1085
#include <iostream>
using namespace std;

int main(void){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    int val[4];
    
    val[0] = w-x;
    val[1] = h-y;
    val[2] = x;
    val[3] = y;
    
    int min = 1000;
    
    for (int i=0;i<4;i++){
        if (val[i] < min){
            min = val[i];
        }
    }
    cout << min;

    return 0;
}

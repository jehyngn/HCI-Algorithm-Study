#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int arr[3];
    while(1){
        for(int i=0;i<3;i++){
            cin >> arr[i];
        }
        if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0){
            return 0;
        }

        sort(arr, arr+3); // 오름차순으로 배열 정렬
        
        if (pow(arr[0], 2) + pow(arr[1], 2) == pow(arr[2], 2)){
            cout << "right\n";
            }
        else{
            cout << "wrong\n";
        }
        
    }
}

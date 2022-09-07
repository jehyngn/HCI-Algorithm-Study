// https://www.acmicpc.net/problem/1546

#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n;
    cin >> n; // 3
    
    float arr[n]; // arr[3]
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    float maxVal=0;
    for (int i=0;i<n;i++){
        maxVal = max(maxVal, arr[i]);
    }
    // maxVal = 80
    for (int i=0;i<n;i++){
        arr[i] = (arr[i]/maxVal)*100;
    }

    float sum;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    cout << sum/n;
}

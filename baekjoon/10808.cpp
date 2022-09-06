//https://www.acmicpc.net/problem/10818

#include <iostream> 
using namespace std;

int main(void){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int minVal = arr[0];
    int maxVal = arr[0];

    for (int i=0;i<n;i++){
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    cout << minVal << " " << maxVal;
    return 0;
}

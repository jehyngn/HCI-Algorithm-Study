// https://www.acmicpc.net/problem/2751
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N];
    for (int i=0;i<N;i++){
        cin >> arr[i];
    }

    sort(arr, arr + N);

    for(int i=0;i<N;i++){
        cout << arr[i] <<"\n";
    }
}

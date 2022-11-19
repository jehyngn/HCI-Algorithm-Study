#include <iostream>
using namespace std;

int main(){
    int num;
    int arr[5];
    int cnt=0;
    cin >> num;
    for(int i=0;i<5;i++){
        cin >> arr[i];
        if(arr[i]==num) cnt++;
    }
    cout << cnt;
}
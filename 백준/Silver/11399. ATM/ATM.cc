#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int sum=0;
    int result=0;

    // 1 2 3 3 4 
    for(int i=0;i<n;i++){
        sum+=arr[i];
        result += sum;
    }
    cout << result;
}
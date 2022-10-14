// https://www.acmicpc.net/problem/1920
// 이진탐색(binary search)
#include <iostream>
#include <algorithm>
using namespace std;



bool binarySearch(int *arr, int len, int key) {
        int start = 0;
        int end = len - 1;
        int mid;

        while(end - start >= 0) {
                mid = (start + end) / 2; // 중앙 값

                if(arr[mid] == key) { // key 값을 찾았을 때
                        return true;
                }
                else if(arr[mid] > key) { // key 값이 mid의 값보다 작을때 (왼쪽으로)
                        end = mid - 1;
                }
                else { // key 값이 mid의 값보다 클 때(오른쪽으로)
                        start = mid + 1;
                }
        }
    return false;
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        
    int arr[100001]={0};
    int N;
    cin >> N;

    for(int i=0;i<N;i++){ // 0~N-1 (0~4)
        cin >> arr[i];
    }

    sort(arr, arr+N); // 1 2 3 4 5
    
    int M;
    cin >> M;
    for(int i=0;i<M;i++){
        int temp; // 1 
        cin >> temp;
        if(binarySearch(arr, N, temp)!=false) cout << "1 "; // arr, 5, 5 
        else cout << "0 ";
    }
}

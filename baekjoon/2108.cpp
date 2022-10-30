// https://www.acmicpc.net/problem/2108
#include <iostream>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int N;
    cin >> N;

    int arr[N]; // N은 홀수이므로 중앙값은 5/2 + 1
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    //평균값, 중앙값, 최빈값, 범위

    // 일단 오름차순으로 정렬
    sort(arr, arr+N);

    //평균값 -> 반올림 해결해야함
    double sum=0;
    for(int i=0;i<N;i++){
        sum+=arr[i];
    }
    int mean = round(sum/N);
    
    //중앙값
    int mid;
    if (N==1) mid = arr[0];
    else mid = arr[(N/2)];

    //최빈값
    int max =0;
    int max_num=0;
    map<int, int> map;
    for(int i=0;i<N;i++){
        map[arr[i]]++;
    }
    for(auto iter:map){
        if(iter.second > max){
            max = iter.second;
        }
    }
    
    int count_2 = 0;
    for(auto iter:map){
        if(iter.second == max){
            if(count_2 == 1) {
                max_num = iter.first;
                break;
                }
            max_num = iter.first;
            count_2++;
        }
    }
    


    // 범위
    int range;
    if(N==1) range = 0;
    else range = arr[N-1] - arr[0];

    cout << mean << '\n' << mid << '\n' << max_num << '\n'<< range << '\n';
}

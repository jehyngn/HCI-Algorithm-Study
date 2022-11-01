//https://www.acmicpc.net/problem/7568
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    pair<int, int> dungchi[N];

    for(int i=0;i<N;i++){
        int weight, height;
        cin >> weight >> height;
        dungchi[i].first = weight;
        dungchi[i].second = height;
    }
    
    int arr[N]; // 각 등수 저장해놓은 배열    
    for(int i=0;i<N;i++){
        int grade = 1;
        for(int j=0;j<N;j++){
            if(i==j) continue;
            if((dungchi[i].first<dungchi[j].first)&&dungchi[i].second<dungchi[j].second)
                grade++;
        }
        arr[i] = grade;
    }


    for(int i=0;i<N;i++){
        cout << arr[i] << ' ';
    }
}

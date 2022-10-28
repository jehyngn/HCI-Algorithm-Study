// https://www.acmicpc.net/problem/9020
#include <iostream>
#include <cstdlib> // 절대값 abs 라이브러리
using namespace std;

int arr[10001] = {0};
 
void prime_num(int N){ // 소수만 index에 0이 담겨있음(소수x : 1)
    for(int i=2;i<=N;i++){
        if(arr[i]!=0) continue;
        for(int j=2*i;j<=N;j+=i){
            arr[j]=1;
        }
    }
}

int main(){
    int TestCase;
    cin >> TestCase;
    for(int i=0;i<TestCase;i++){
        int N;
        cin >> N;

        //N보다 작은 모든 소수 구함
        prime_num(N);
        
        int p_num[N];
        int index = 0;

        //N보다 작은 소수를 p_num 배열에 넣음
        for(int i=1;i<=N;i++){
            if(arr[i]==0){
                p_num[index++] = i;
            }
        }

        // 하나씩 확인하면서 다른 소수와 더했을 때 N이 되면 차이값 구하고, 그 떄의 두 소수를 num1, num2에 저장
        int cha = 10000;
        int num1, num2;
        for(int i=0;i<index;i++){
            for(int j=0;j<index;j++){
                if(p_num[i]+p_num[j] == N){
                    if(cha > abs(p_num[i] - p_num[j])){
                        cha = abs(p_num[i] - p_num[j]);
                        num1 = p_num[i];
                        num2 = p_num[j];
                    }
                }
            }
        }

        cout << num1 << ' ' << num2 << '\n';
    }
}

// https://www.acmicpc.net/problem/1978
#include <iostream>
using namespace std;

int main(){
    int N, cnt_final = 0;
    cin >> N;

    int temp;
    
    for(int i=0;i<N;i++){
        cin >> temp;
        
        int cnt_temp =0;
        for(int j=1;j<=temp;j++){
            if(temp % j ==0)
                cnt_temp++;
        }
        if(cnt_temp == 2)
            cnt_final++;
    }
    
    cout << cnt_final;
}

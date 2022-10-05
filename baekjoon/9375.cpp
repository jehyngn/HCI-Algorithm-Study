//https://www.acmicpc.net/problem/9375
#include <iostream>
#include <map>
using namespace std;

// 경우의 수 = 종류+1(알몸) 계속 곱해서 1(다 알몸) 뺀것 

int main(){
    int Test_case;
    cin >> Test_case;


    for(int i=0;i<Test_case;i++){
        map<string, int> cl;
        int N;
        cin >> N;
        for(int j=0;j<N;j++){
            string clothes, kinds;
            cin >> clothes >> kinds;
            cl[kinds] += 1;
        }
        int sum = 1;
        for(auto p : cl){
            sum *= (p.second+1);
        }
        
        cout <<sum - 1 << '\n';
    }
}

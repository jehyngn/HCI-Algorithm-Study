#include <iostream>
using namespace std;

int map[501][501];
int N, M, B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M >> B;

    int min_time=1e9;
    int total_height;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> map[i][j];
        }
    }

    // 브루트 포스 : 모든 h에 대해서 평탄화시 걸리는 시간 계산
    for(int h=0;h<=256;h++){
        int build=0;
        int remove=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                int height = map[i][j]-h;
                if(height>0){
                    remove+=height;
                }
                else if(height<=0){
                    build -= height;
                }
            }
        }
        if(remove+B>=build){
            int time = 2*remove + build;
            if(time<=min_time){
                min_time = time;
                total_height = h;
            }
        }
    }

    cout << min_time << ' ' << total_height;
}
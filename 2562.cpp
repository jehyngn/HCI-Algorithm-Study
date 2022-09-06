#include <iostream>
// https://www.acmicpc.net/submit/2562/48821139
using namespace std;

int main(void){
    int max = 0;
    int input = 0;
    int index;
    for(int i=0;i<9;i++){
        cin >> input;
        if(max < input){
            max = input;
            index = i;
        }
    }
    cout << max << "\n" << index+1;
    return 0;
}

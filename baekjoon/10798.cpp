#include <iostream>
#include <string>
using namespace std;

string arr[5][15];

int main(){
    for(int i=0;i<5;i++){
        string temp;
        cin >> temp;
        for(int j=0;j<temp.size();j++){
            arr[i][j] = temp[j];
        }
    }
    
    for(int i=0;i<15;i++){
            for(int j=0;j<5;j++){
                cout << arr[j][i];
            }
    }
}

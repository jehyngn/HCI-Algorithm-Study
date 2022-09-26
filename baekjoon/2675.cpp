// https://www.acmicpc.net/problem/2675
#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    int iterate;

    cin >> T;
    for(int i=0;i<T;i++){
        cin >> iterate;
        string word;
        cin >> word;
        int size = word.size();
        
        for(int j=0;j<size;j++){
            for(int k=0;k<iterate;k++){
                 cout << word[j];   
            }
        }
        cout << "\n";
    }
}

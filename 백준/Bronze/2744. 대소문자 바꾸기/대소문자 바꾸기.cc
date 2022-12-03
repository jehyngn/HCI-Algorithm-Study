#include <iostream>
#include <string>
using namespace std;

// a : 97, A : 65
int main(){
    string word;
    cin >> word;
    for(int i=0;i<word.size();i++){
        if (word[i]>=97) cout << char(word[i]-32);
        else{ cout << char(word[i]+32);}
    }
}
#include <iostream>
#include <string>
using namespace std;
#define r 31
#define M 1234567891


int main(){
    // a = 97 
    int l;
    long long R=1;
    cin >> l;
    string str;
    cin >> str;
    long long sum=0;
    
    for(int i=0;i<str.length();i++){
        long long temp_num = int(str[i])-96;
        sum = sum + (temp_num)*R % M;
        sum %= M;
        R = (R*r)%M;
    }
    cout << sum;
}
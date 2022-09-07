// https://www.acmicpc.net/problem/2577

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int num;
    num = a*b*c;

    string str = to_string(num);
    
    int count[10]={0};

    int size = str.size();
    int temp;
    for(int i=0;i<size;i++){
        temp = str[i];
        count[temp-'0']++;
    }

    for(int j=0;j<10;j++){
        cout << count[j]<< "\n";
    }
    
}

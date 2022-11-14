#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int result;
    if(a==b&&b==c&&c==a){
        result = 10000 + a*1000;
    }
    else if(a==b||b==c||c==a){
        int temp;
        if(a==b) temp = a;
        else if(b==c) temp = b;
        else if(c==a) temp =c;
        result = 1000 + temp*100;
    }
    else{
        int max=0;
        if(a>max) max = a;
        if(b>max) max = b;
        if(c>max) max = c;
        result = max*100;
    }
    cout << result;
}
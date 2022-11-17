#include <iostream>
using namespace std;

int cnt_fib=1;
int cnt_fibonacci=0;

int fib(int n) {
    
    if (n == 1 || n == 2) return 1; 
    else {
        cnt_fib++;
        return (fib(n - 1) + fib(n - 2));
    }
}

int fibonacci(int n) {
    int f[n];
    f[1] = 1;
    f[2] = 1;
    for(int i=3;i<=n;i++){
        cnt_fibonacci++;
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}

int main(){
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << cnt_fib <<' '<< cnt_fibonacci;
}
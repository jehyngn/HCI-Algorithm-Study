// acmicpc.net/problem/10773
#include <iostream>
#include <stack>
using namespace std;

int main(){
    int num;
    cin >> num;

    stack<int> stack;
    int temp;
    for(int i=0;i<num;i++){
        cin >> temp;
        if(temp == 0){
            stack.pop();
        }
        else{
            stack.push(temp);
        }
    }
    int sum = 0;
    int size = stack.size();
    for(int i=0;i<size;i++){
        sum += stack.top();
        stack.pop();
    }
    cout << sum;
}

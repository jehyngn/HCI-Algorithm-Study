#include <iostream>
using namespace std;

int main(){
    char grade;
    cin >> grade;

    cout << fixed;
    cout.precision(1);
    if(grade == 'A'){
        double b = 4.0;
        char a;
        cin >> a;
        if(a == '+') cout << b+0.3;
        else if (a == '0') cout << b;
        else cout << b-0.3;
    }
    else if (grade == 'B'){
        double b = 3.0;
        char a;
        cin >> a;
        if(a == '+') cout << b+0.3;
        else if (a == '0') cout << b;
        else cout << b-0.3;
    }
    else if (grade == 'C'){
        double b = 2.0;
        char a;
        cin >> a;
        if(a == '+') cout << b+0.3;
        else if (a == '0') cout << b;
        else cout << b-0.3;
    }
    else if (grade == 'D'){
        double b = 1.0;
        char a;
        cin >> a;
        if(a == '+') cout << b+0.3;
        else if (a == '0') cout << b;
        else cout << b-0.3;
    }
    else{
        cout << "0.0";
    }
}
//https://www.acmicpc.net/problem/17479 
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    map<string, string> menu;
    for(int i=0;i<A;i++){
        string menu_name;
        string price;
        cin >> menu_name >> price;
        price = 'a' + price;
        // cout << menu_name << '\n';
        menu[menu_name]=price;
    }

    for(int i=0;i<B;i++){
        string menu_name;
        string price;
        cin >> menu_name >> price;
        price = 'b' + price;
        menu[menu_name]=price;
    }

    for(int i=0;i<C;i++){
        string menu_name;
        cin >> menu_name;
        menu[menu_name]= "c";
    }

    // for(auto iter : menu){
    //     cout << iter.first << ' ' << iter.second << '\n';
    // }

    long long int a_sum = 0, b_sum = 0,b_cnt = 0, c_cnt = 0;
    long long int N; // 주문할 음식의 수
    cin >> N;
    for(int i=0;i<N;i++){
        string order_menu;
        cin >> order_menu;
        if (menu[order_menu][0] == 'a'){
            string string_money;
            long long int size = menu[order_menu].size();
            for(int j=1;j<size;j++){
                string_money += menu[order_menu][j];
            }
            long long int int_money = stoi(string_money);
            a_sum += int_money;
        }
        if (menu[order_menu][0] == 'b'){
            string string_money;
            long long int size = menu[order_menu].size();
            for(int j=1;j<size;j++){
                string_money += menu[order_menu][j];
            }
            long long int int_money = stoi(string_money);
            b_sum += int_money;
            b_cnt++;
        }
        if (menu[order_menu][0] == 'c'){
            c_cnt++;
        }
    }

    // cout << a_sum << ' ' << b_sum << ' ' << b_cnt << ' ' << c_cnt<< ' ';
    bool is_correct = true;

    if(a_sum<20000 && b_cnt >= 1) is_correct = false;
    else{
        long long int total = a_sum + b_sum;
        if(total < 50000 && c_cnt >= 1) is_correct = false;
        else if (total >= 50000 && c_cnt >= 2) is_correct = false;
    }

    
    if (is_correct) cout << "Okay";
    else cout << "No";
}

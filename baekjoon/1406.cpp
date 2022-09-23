// https://www.acmicpc.net/problem/1406
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int N;
    string s;
    cin >> s;
    cin >> N;
    // 연결리스트에 원소 할당
    list<char> li(s.begin(), s.end());
    
    // 커서위치를 입력된 문자 제일 끝에 위치
    auto cursor = li.end();

    for(int i=0;i<N;i++){
        char cmd, word;
        cin >> cmd;

        if(cmd == 'L'){
            if(cursor != li.begin())
                cursor--;
        }
        else if(cmd == 'D'){
            if(cursor != li.end())
                cursor++;
        }
        else if(cmd == 'B'){
            if(cursor != li.begin()){
                cursor--;
                cursor = li.erase(cursor);
            }
        }
        else if(cmd == 'P'){
            cin >> word;
            li.insert(cursor, word);
        }
    }
    
    // 연결리스트 출력
    for (cursor = li.begin(); cursor != li.end(); cursor++)
        cout << *cursor;
}
